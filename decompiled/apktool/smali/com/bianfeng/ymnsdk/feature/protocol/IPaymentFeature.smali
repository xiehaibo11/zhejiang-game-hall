.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature;
.super Ljava/lang/Object;
.source "IPaymentFeature.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/protocol/IPaymentFeature$PAYMENT_ARGS_CHECKER;
    }
.end annotation


# static fields
.field public static final ARG_CHECK_ORDER_DELIVERY_SUCCESS:I = 0x3

.field public static final ARG_CHECK_ORDER_PAY_SUCCESS:I = 0x2

.field public static final ARG_CLIENT_CALLBACK:Ljava/lang/String; = "client_callback"

.field public static final ARG_CLIENT_INFO_V2:Ljava/lang/String; = "client_info"

.field public static final ARG_CP_ORDER_ID:Ljava/lang/String; = "order_id"

.field public static final ARG_CP_ORDER_ID_V2:Ljava/lang/String; = "cp_order_id"

.field public static final ARG_EXT:Ljava/lang/String; = "ext"

.field public static final ARG_EXTENDS_V2:Ljava/lang/String; = "extend"

.field public static final ARG_IS_TEST_V2:Ljava/lang/String; = "is_test"

.field public static final ARG_IS_VERSION_V2:Ljava/lang/String; = "ymnsdk_version"

.field public static final ARG_NOTIFY_URL:Ljava/lang/String; = "notify_url"

.field public static final ARG_ORDER_NO_V2:Ljava/lang/String; = "order_no"

.field public static final ARG_PAY_ATTACH_V2:Ljava/lang/String; = "trade_attach"

.field public static final ARG_PAY_PARAMETERS_V2:Ljava/lang/String; = "trade_parameters"

.field public static final ARG_PAY_PAR_VALUE_V2:Ljava/lang/String; = "par_value"

.field public static final ARG_PAY_REQUEST_CONTENT_V2:Ljava/lang/String; = "trade_request_content"

.field public static final ARG_PAY_TOTAL_FEE_V2:Ljava/lang/String; = "total_fee"

.field public static final ARG_PLATFORM_NOTIFY_URL:Ljava/lang/String; = "platform_notify_url"

.field public static final ARG_PRODUCT_COUNT:Ljava/lang/String; = "product_count"

.field public static final ARG_PRODUCT_ID:Ljava/lang/String; = "product_id"

.field public static final ARG_PRODUCT_NAME:Ljava/lang/String; = "product_name"

.field public static final ARG_PRODUCT_PRICE:Ljava/lang/String; = "product_price"

.field public static final ARG_PRODUCT_QTY_V2:Ljava/lang/String; = "product_qty"

.field public static final ARG_ROLE_BALANCE:Ljava/lang/String; = "role_balance"

.field public static final ARG_ROLE_GRADE:Ljava/lang/String; = "role_grade"

.field public static final ARG_ROLE_ID:Ljava/lang/String; = "role_id"

.field public static final ARG_ROLE_NAME:Ljava/lang/String; = "role_name"

.field public static final ARG_SERVER_ID:Ljava/lang/String; = "server_id"

.field public static final ARG_SERVER_NAME:Ljava/lang/String; = "server_name"

.field public static final ARG_SHOP_ID_V2:Ljava/lang/String; = "shop_id"

.field public static final ARG_SOURCE_V2:Ljava/lang/String; = "source"

.field public static final ARG_THIRDPARTY_CALLBACK:Ljava/lang/String; = "platform_callback"

.field public static final ARG_TOKEN_PRIVATEKEY:Ljava/lang/String; = "token_hmac256_privatekey"

.field public static final ARG_TOKEN_SUB:Ljava/lang/String; = "token_sub"

.field public static final ARG_TOKEN_UID:Ljava/lang/String; = "token_uid"

.field public static final ARG_TRADE_CODE:Ljava/lang/String; = "trade_code"

.field public static final FUNCTION_PRE_PAY:Ljava/lang/String; = "pre_pay"

.field public static final ORDER_TYPE_CP:I = 0x0

.field public static final ORDER_TYPE_YMN:I = 0x1


# virtual methods
.method public abstract getOrderId()Ljava/lang/String;
.end method

.method public abstract pay(Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract prePay(Ljava/util/LinkedHashMap;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method
