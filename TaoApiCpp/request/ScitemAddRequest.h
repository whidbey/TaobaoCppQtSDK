#ifndef SCITEMADDREQUEST_H
#define SCITEMADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemAddResponse.h>

/**
 * TOP API: 发布后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBarCode() const
;  void setBarCode (QString barCode);

 qlonglong getBrandId() const
;  void setBrandId (qlonglong brandId);

 QString getBrandName() const
;  void setBrandName (QString brandName);

 qlonglong getHeight() const
;  void setHeight (qlonglong height);

 qlonglong getIsAreaSale() const
;  void setIsAreaSale (qlonglong isAreaSale);

 qlonglong getIsCostly() const
;  void setIsCostly (qlonglong isCostly);

 qlonglong getIsDangerous() const
;  void setIsDangerous (qlonglong isDangerous);

 qlonglong getIsFriable() const
;  void setIsFriable (qlonglong isFriable);

 qlonglong getIsWarranty() const
;  void setIsWarranty (qlonglong isWarranty);

 QString getItemName() const
;  void setItemName (QString itemName);

 qlonglong getItemType() const
;  void setItemType (qlonglong itemType);

 qlonglong getLength() const
;  void setLength (qlonglong length);

 qlonglong getMatterStatus() const
;  void setMatterStatus (qlonglong matterStatus);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPrice() const
;  void setPrice (qlonglong price);

 QString getProperties() const
;  void setProperties (QString properties);

 QString getRemark() const
;  void setRemark (QString remark);

 qlonglong getSpuId() const
;  void setSpuId (qlonglong spuId);

 qlonglong getVolume() const
;  void setVolume (qlonglong volume);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);

 qlonglong getWidth() const
;  void setWidth (qlonglong width);

 QString getWmsCode() const
;  void setWmsCode (QString wmsCode);


  virtual ScitemAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 条形码
 **/
  QString barCode;

/**
 * @brief 品牌id
 **/
  qlonglong brandId;

/**
 * @brief brand_Name
 **/
  QString brandName;

/**
 * @brief 高 单位：mm
 **/
  qlonglong height;

/**
 * @brief 1表示区域销售，0或是空是非区域销售
 **/
  qlonglong isAreaSale;

/**
 * @brief 是否是贵重品 0:不是 1：是
 **/
  qlonglong isCostly;

/**
 * @brief 是否危险 0：不是  1：是
 **/
  qlonglong isDangerous;

/**
 * @brief 是否易碎 0：不是  1：是
 **/
  qlonglong isFriable;

/**
 * @brief 是否保质期：0:不是 1：是
 **/
  qlonglong isWarranty;

/**
 * @brief 商品名称
 **/
  QString itemName;

/**
 * @brief 0.普通供应链商品 1.供应链组合主商品
 **/
  qlonglong itemType;

/**
 * @brief 长度 单位：mm
 **/
  qlonglong length;

/**
 * @brief 0:液体，1：粉体，2：固体
 **/
  qlonglong matterStatus;

/**
 * @brief 商家编码
 **/
  QString outerCode;

/**
 * @brief price
 **/
  qlonglong price;

/**
 * @brief 商品属性格式是  p1:v1,p2:v2,p3:v3
 **/
  QString properties;

/**
 * @brief remark
 **/
  QString remark;

/**
 * @brief spuId或是cspuid
 **/
  qlonglong spuId;

/**
 * @brief 体积：立方厘米
 **/
  qlonglong volume;

/**
 * @brief weight
 **/
  qlonglong weight;

/**
 * @brief 宽 单位：mm
 **/
  qlonglong width;

/**
 * @brief 仓储商编码
 **/
  QString wmsCode;

};

#endif  /* SCITEMADDREQUEST_H */
