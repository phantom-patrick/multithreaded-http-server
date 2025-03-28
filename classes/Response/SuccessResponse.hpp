#ifndef SUCCESS_RESPONSE_HPP
#define SUCCESS_RESPONSE_HPP

#include "./Response.hpp";
#include "../../helpers/helpers.hpp";

using json = nlohmann::json;

class SuccessResponse : public Response
{
public:
  SuccessResponse(CRITICAL_SECTION *printSection);
  SuccessResponse(CRITICAL_SECTION *printSection, json res);
};

#endif //SUCCESS_RESPONSE_HPP