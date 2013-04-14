#ifndef ITEMPRICEUPDATEREQUEST_H
#define ITEMPRICEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemPriceUpdateResponse.h>

/**
 * TOP API: 更新商品价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemPriceUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAfterSaleId() const
;  void setAfterSaleId (qlonglong afterSaleId);

 QString getApproveStatus() const
;  void setApproveStatus (QString approveStatus);

 qlonglong getAuctionPoint() const
;  void setAuctionPoint (qlonglong auctionPoint);

 QString getAutoFill() const
;  void setAutoFill (QString autoFill);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 qlonglong getCodPostageId() const
;  void setCodPostageId (qlonglong codPostageId);

 QString getDesc() const
;  void setDesc (QString desc);

 QString getEmsFee() const
;  void setEmsFee (QString emsFee);

 QString getExpressFee() const
;  void setExpressFee (QString expressFee);

 QString getFreightPayer() const
;  void setFreightPayer (QString freightPayer);

 bool getHasDiscount() const
;  void setHasDiscount (bool hasDiscount);

 bool getHasInvoice() const
;  void setHasInvoice (bool hasInvoice);

 bool getHasShowcase() const
;  void setHasShowcase (bool hasShowcase);

 bool getHasWarranty() const
;  void setHasWarranty (bool hasWarranty);

 FileItem getImage() const
;  void setImage (FileItem image);

 QString getIncrement() const
;  void setIncrement (QString increment);

 QString getInputPids() const
;  void setInputPids (QString inputPids);

 QString getInputStr() const
;  void setInputStr (QString inputStr);

 bool getIs3D() const
;  void setIs3D (bool is3D);

 bool getIsEx() const
;  void setIsEx (bool isEx);

 bool getIsLightningConsignment() const
;  void setIsLightningConsignment (bool isLightningConsignment);

 bool getIsReplaceSku() const
;  void setIsReplaceSku (bool isReplaceSku);

 bool getIsTaobao() const
;  void setIsTaobao (bool isTaobao);

 bool getIsXinpin() const
;  void setIsXinpin (bool isXinpin);

 QString getLang() const
;  void setLang (QString lang);

 QDateTime getListTime() const
;  void setListTime (QDateTime listTime);

 QString getLocationCity() const
;  void setLocationCity (QString locationCity);

 QString getLocationState() const
;  void setLocationState (QString locationState);

 qlonglong getNum() const
;  void setNum (qlonglong num);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 QString getPostFee() const
;  void setPostFee (QString postFee);

 qlonglong getPostageId() const
;  void setPostageId (qlonglong postageId);

 QString getPrice() const
;  void setPrice (QString price);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getPropertyAlias() const
;  void setPropertyAlias (QString propertyAlias);

 QString getProps() const
;  void setProps (QString props);

 bool getSellPromise() const
;  void setSellPromise (bool sellPromise);

 QString getSellerCids() const
;  void setSellerCids (QString sellerCids);

 QString getSkuOuterIds() const
;  void setSkuOuterIds (QString skuOuterIds);

 QString getSkuPrices() const
;  void setSkuPrices (QString skuPrices);

 QString getSkuProperties() const
;  void setSkuProperties (QString skuProperties);

 QString getSkuQuantities() const
;  void setSkuQuantities (QString skuQuantities);

 QString getStuffStatus() const
;  void setStuffStatus (QString stuffStatus);

 qlonglong getSubStock() const
;  void setSubStock (qlonglong subStock);

 QString getTitle() const
;  void setTitle (QString title);

 qlonglong getValidThru() const
;  void setValidThru (qlonglong validThru);

 qlonglong getWeight() const
;  void setWeight (qlonglong weight);


  virtual ItemPriceUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 售后服务说明模板id
 **/
  qlonglong afterSaleId;

/**
 * @brief 商品上传后的状态。可选值:onsale（出售中）,instock（库中），如果同时更新商品状态为出售中及list_time为将来的时间，则商品还是处于定时上架的状态, 此时item.is_timing为true
 **/
  QString approveStatus;

/**
 * @brief 商品的积分返点比例。如：5 表示返点比例0.5%. 注意：返点比例必须是>0的整数，而且最大是90,即为9%.B商家在发布非虚拟商品时，返点必须是 5的倍数，即0.5%的倍数。其它是1的倍数，即0.1%的倍数。无名良品商家发布商品时，复用该字段记录积分宝返点比例，返点必须是对应类目的返点步长的整数倍，默认是5，即0.5%。注意此时该字段值依旧必须是>0的整数，注意此时该字段值依旧必须是>0的整数，最高值不超过500，即50%
 **/
  qlonglong auctionPoint;

/**
 * @brief 代充商品类型。只有少数类目下的商品可以标记上此字段，具体哪些类目可以上传可以通过taobao.itemcat.features.get获得。在代充商品的类目下，不传表示不标记商品类型（交易搜索中就不能通过标记搜到相关的交易了）。可选类型：  
no_mark(不做类型标记)  
time_card(点卡软件代充)  
fee_card(话费软件代充)
 **/
  QString autoFill;

/**
 * @brief 叶子类目id
 **/
  qlonglong cid;

/**
 * @brief 货到付款运费模板ID
 **/
  qlonglong codPostageId;

/**
 * @brief 商品描述. 字数要大于5个字符，小于25000个字符 ，受违禁词控制
 **/
  QString desc;

/**
 * @brief ems费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:25.07，表示:25元7分
 **/
  QString emsFee;

/**
 * @brief 快递费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:15.07，表示:15元7分
 **/
  QString expressFee;

/**
 * @brief 运费承担方式。运费承担方式。可选值:seller（卖家承担）,buyer(买家承担);
 **/
  QString freightPayer;

/**
 * @brief 支持会员打折。可选值:true,false;
 **/
  bool hasDiscount;

/**
 * @brief 是否有发票。可选值:true,false (商城卖家此字段必须为true)
 **/
  bool hasInvoice;

/**
 * @brief 橱窗推荐。可选值:true,false;
 **/
  bool hasShowcase;

/**
 * @brief 是否有保修。可选值:true,false;
 **/
  bool hasWarranty;

/**
 * @brief 商品图片。类型:JPG,GIF;最大长度:500k
 **/
  FileItem image;

/**
 * @brief 加价幅度 如果为0，代表系统代理幅度
 **/
  QString increment;

/**
 * @brief 用户自行输入的类目属性ID串，结构："pid1,pid2,pid3"，如："20000"（表示品牌） 注：通常一个类目下用户可输入的关键属性不超过1个。
 **/
  QString inputPids;

/**
 * @brief 用户自行输入的子属性名和属性值，结构:"父属性值;一级子属性名;一级子属性值;二级子属性名;自定义输入值,....",如：“耐克;耐克系列;科比系列;科比系列;2K5,Nike乔丹鞋;乔丹系列;乔丹鞋系列;乔丹鞋系列;json5”，多个自定义属性用','分割，input_str需要与input_pids一一对应，注：通常一个类目下用户可输入的关键属性不超过1个。所有属性别名加起来不能超过3999字节。此处不可以使用“其他”、“其它”和“其她”这三个词。
 **/
  QString inputStr;

/**
 * @brief 是否是3D
 **/
  bool is3D;

/**
 * @brief 是否在外店显示
 **/
  bool isEx;

/**
 * @brief 实物闪电发货。注意：在售的闪电发货产品不允许取消闪电发货，需要先下架商品才能取消闪电发货标记
 **/
  bool isLightningConsignment;

/**
 * @brief 是否替换sku
 **/
  bool isReplaceSku;

/**
 * @brief 是否在淘宝上显示
 **/
  bool isTaobao;

/**
 * @brief 商品是否为新品。只有在当前类目开通新品,并且当前用户拥有该类目下发布新品权限时才能设置is_xinpin为true，否则设置true后会返回错误码:isv.invalid-permission:xinpin。同时只有一口价全新的宝贝才能设置为新品，否则会返回错误码：isv.invalid-parameter:xinpin。不设置参数就保持原有值。
 **/
  bool isXinpin;

/**
 * @brief 商品文字的版本，繁体传入”zh_HK”，简体传入”zh_CN”
 **/
  QString lang;

/**
 * @brief 上架时间。不论是更新架下的商品还是出售中的商品，如果这个字段小于当前时间则直接上架商品，并且上架的时间为更新商品的时间，此时item.is_timing为false，如果大于当前时间则宝贝会下架进入定时上架的宝贝中。
 **/
  QDateTime listTime;

/**
 * @brief 所在地城市。如杭州 具体可以下载http://dl.open.taobao.com/sdk/商品城市列表.rar 取到
 **/
  QString locationCity;

/**
 * @brief 所在地省份。如浙江 具体可以下载http://dl.open.taobao.com/sdk/商品城市列表.rar 取到
 **/
  QString locationState;

/**
 * @brief 商品数量，取值范围:0-999999的整数。且需要等于Sku所有数量的和
 **/
  qlonglong num;

/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief 商品主图需要关联的图片空间的相对url。这个url所对应的图片必须要属于当前用户。pic_path和image只需要传入一个,如果两个都传，默认选择pic_path
 **/
  QString picPath;

/**
 * @brief 平邮费用。取值范围:0.01-999.00;精确到2位小数;单位:元。如:5.07，表示:5元7分, 注:post_fee,express_fee,ems_fee需一起填写
 **/
  QString postFee;

/**
 * @brief 宝贝所属的运费模板ID。取值范围：整数且必须是该卖家的运费模板的ID（可通过taobao.postages.get获得当前会话用户的所有邮费模板）
 **/
  qlonglong postageId;

/**
 * @brief 商品价格。取值范围:0-100000000;精确到2位小数;单位:元。如:200.07，表示:200元7分。需要在正确的价格区间内。
 **/
  QString price;

/**
 * @brief 商品所属的产品ID(B商家发布商品需要用)
 **/
  qlonglong productId;

/**
 * @brief 属性值别名。如pid:vid:别名;pid1:vid1:别名1， pid:属性id vid:值id。总长度不超过512字节
 **/
  QString propertyAlias;

/**
 * @brief 商品属性列表。格式:pid:vid;pid:vid。属性的pid调用taobao.itemprops.get取得，属性值的vid用taobao.itempropvalues.get取得vid。 如果该类目下面没有属性，可以不用填写。如果有属性，必选属性必填，其他非必选属性可以选择不填写.属性不能超过35对。所有属性加起来包括分割符不能超过549字节，单个属性没有限制。 如果有属性是可输入的话，则用字段input_str填入属性的值。
 **/
  QString props;

/**
 * @brief 是否承诺退换货服务!虚拟商品无须设置此项!
 **/
  bool sellPromise;

/**
 * @brief 重新关联商品与店铺类目，结构:",cid1,cid2,...,"，如果店铺类目存在二级类目，必须传入子类目cids。
 **/
  QString sellerCids;

/**
 * @brief Sku的外部id串，结构如：1234,1342,… sku_properties, sku_quantities, sku_prices, sku_outer_ids在输入数据时要一一对应，如果没有sku_outer_ids也要写上这个参数，入参是","(这个是两个sku的示列，逗号数应该是sku个数减1)；该参数最大长度是512个字节
 **/
  QString skuOuterIds;

/**
 * @brief 更新的Sku的价格串，结构如：10.00,5.00,… 精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString skuPrices;

/**
 * @brief 更新的Sku的属性串，调用taobao.itemprops.get获取类目属性，如果属性是销售属性，再用taobao.itempropvalues.get取得vid。格式:pid:vid;pid:vid。该字段内的销售属性也需要在props字段填写 。如果更新时有对Sku进行操作，则Sku的properties一定要传入。
 **/
  QString skuProperties;

/**
 * @brief 更新的Sku的数量串，结构如：num1,num2,num3 如:2,3,4
 **/
  QString skuQuantities;

/**
 * @brief 商品新旧程度。可选值:new（全新）,unused（闲置）,second（二手）。
 **/
  QString stuffStatus;

/**
 * @brief 商品是否支持拍下减库存:1支持;2取消支持(付款减库存);0(默认)不更改 集市卖家默认拍下减库存; 商城卖家默认付款减库存
 **/
  qlonglong subStock;

/**
 * @brief 宝贝标题. 不能超过60字符,受违禁词控制
 **/
  QString title;

/**
 * @brief 有效期。可选值:7,14;单位:天;
 **/
  qlonglong validThru;

/**
 * @brief 商品的重量(商超卖家专用字段)
 **/
  qlonglong weight;

};

#endif  /* ITEMPRICEUPDATEREQUEST_H */
