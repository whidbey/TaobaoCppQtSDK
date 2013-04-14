#ifndef SELLERCENTERROLEADDRESPONSE_H
#define SELLERCENTERROLEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Role.h>


/**
 * @brief TOP RESPONSE API: 给指定的卖家创建新的子账号角色<br/> 
如果需要授权的权限点有下级权限点或上级权限点，把该权限点的父权限点和该权限点的所有子权限都一并做赋权操作，并递归处理<br/>例如：权限点列表如下<br/> 
code=sell 宝贝管理<br/> 
---------|code=sm 店铺管理<br/> 
---------|---------|code=sm-design 如店铺装修<br/> 
---------|---------|---------|code=sm-tbd-visit内店装修入口<br/> 
---------|---------|---------|code=sm-tbd-publish内店装修发布<br/> 
---------|---------|code=phone 手机淘宝店铺<br/> 
调用改接口给code=sm-design店铺装修赋权时，同时会将下列权限点都赋予默认角色<br/> 
code=sell 宝贝管理<br/> 
---------|code=sm 店铺管理<br/> 
---------|---------|code=sm-design 如店铺装修<br/> 
---------|---------|---------|code=sm-tbd-visit内店装修入口<br/> 
---------|---------|---------|code=sm-tbd-publish内店装修发布<br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercenterRoleAddResponse : public TaoResponse
{
public:
 virtual ~SellercenterRoleAddResponse() { }

  Role getRole() const;
  void setRole (Role role);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 子账号角色
 **/
  Role role;

};

#endif
