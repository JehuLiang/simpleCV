﻿#ifndef QCVEDGEDETECTFILTER_H
#define QCVEDGEDETECTFILTER_H

#include "filter/QCvMatFilter.h"

#include <QString>

class QCvEdgeDetectFilter : public QCvMatFilter
{
  public:
    QCvEdgeDetectFilter(QString name) : QCvMatFilter(name)
    {
        m_lowerThres = 160;
        m_higherThres = 240;
    }

  public:
    void setThresholds(int lower, int higher);
    void execFilter(const cv::Mat& mat, cv::Mat& outMat);

  private:
    int m_lowerThres;
    int m_higherThres;
};

#endif // QCVEDGEDETECTFILTER_H
