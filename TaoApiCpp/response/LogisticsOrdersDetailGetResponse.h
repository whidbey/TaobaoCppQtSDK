#ifndef LOGISTICSORDERSDETAILGETRESPONSE_H
#define LOGISTICSORDERSDETAILGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Shipping.h>


/**
 * @brief TOP RESPONSE API: 查询物流订单的详细信息，涉及用户隐私字段。（注：该API主要是提供给卖家查询物流订单使用，买家查询物流订单，建议使用taobao.logistics.trace.search）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrdersDetailGetResponse : public TaoResponse
{
public:
 virtual ~LogisticsOrdersDetailGetResponse() { }

  QList<Shipping> getShippings() const;
  void setShippings (QList<Shipping> shippings);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取的物流订单详情列表.返回的Shipping包含的具体信息为入参fields请求的字段信息.
 **/
  QList<Shipping> shippings;

/**
 * @brief 搜索到的物流订单列表总数
 **/
  qlonglong totalResults;

};

#endif
