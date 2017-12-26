#ifndef QCVFACEDETECTFILTER_H
#define QCVFACEDETECTFILTER_H

#include "filter/QCvMatFilter.h"

#include "opencv2/objdetect.hpp"

class QCvFaceDetectFilter : public QCvMatFilter
{
  public:
    QCvFaceDetectFilter(QString name) : QCvMatFilter(name) {}

  public:
    bool load(QString fileName);
    bool isClassifierValid();

  protected:
    virtual cv::Mat execFilter(const cv::Mat& mat);

  protected:
    cv::CascadeClassifier m_classifier;
};

#endif // QCVFACEDETECTFILTER_H
