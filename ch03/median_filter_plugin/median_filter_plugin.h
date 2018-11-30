#pragma once
#include "median_filter_plugin_global.h"

#include "cvplugininterface.h"

class MEDIAN_FILTER_PLUGINSHARED_EXPORT MedianFilterPlugin
    : public QObject,
      public CvPluginInterface {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID CVPLUGININTERFACE_IID)
    Q_INTERFACES(CvPluginInterface)
   public:
    MedianFilterPlugin();
    ~MedianFilterPlugin();
    QString description();
    void processImage(const cv::Mat &inputImage, cv::Mat &outputImage);
};
