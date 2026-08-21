.class public Lcom/bianfeng/ymnsdk/YmnSdk;
.super Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;
.source "YmnSdk.java"

# interfaces
.implements Lcom/bianfeng/platform/UserWrapper;
.implements Lcom/bianfeng/platform/PaymentWrapper;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/YmnSdkUserWrapper;-><init>()V

    .line 16
    return-void
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    .line 19
    const-string v0, "2.4.8.7"

    return-object v0
.end method
