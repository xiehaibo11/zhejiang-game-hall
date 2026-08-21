.class public interface abstract Lcom/bianfeng/platform/PaymentWrapper;
.super Ljava/lang/Object;
.source "PaymentWrapper.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field public static final ERROR_MESSAGE:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static final PAYRESULT_CANCEL:I = 0xca

.field public static final PAYRESULT_FAIL:I = 0xc9

.field public static final PAYRESULT_INIT_FAIL:I = 0xce

.field public static final PAYRESULT_INIT_SUCCESS:I = 0xcd

.field public static final PAYRESULT_NETWORK_ERROR:I = 0xcb

.field public static final PAYRESULT_NOW_PAYING:I = 0xcf

.field public static final PAYRESULT_PRE_ORDER_FAIL:I = 0xd6

.field public static final PAYRESULT_PRE_ORDER_SUCCESS:I = 0xd5

.field public static final PAYRESULT_PRODUCTIONINFOR_INCOMPLETE:I = 0xcc

.field public static final PAYRESULT_SUCCESS:I = 0xc8

.field public static final PAYRESULT_TOKEN_INVALID:I = 0xd4


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 24
    new-instance v0, Lcom/bianfeng/platform/PaymentWrapper$1;

    invoke-direct {v0}, Lcom/bianfeng/platform/PaymentWrapper$1;-><init>()V

    sput-object v0, Lcom/bianfeng/platform/PaymentWrapper;->ERROR_MESSAGE:Ljava/util/Map;

    return-void
.end method
