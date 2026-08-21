.class Lcom/tkay/china/api/TYChinaSDKHandler$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bun/miitmdid/interfaces/IIdentifierListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/api/TYChinaSDKHandler;->handleInitOaidSDK(Landroid/content/Context;Lcom/tkay/china/api/OaidSDKCallbackListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$oaidSDKListener:Lcom/tkay/china/api/OaidSDKCallbackListener;


# direct methods
.method constructor <init>(Lcom/tkay/china/api/OaidSDKCallbackListener;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/tkay/china/api/TYChinaSDKHandler$1;->val$oaidSDKListener:Lcom/tkay/china/api/OaidSDKCallbackListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public OnSupport(ZLcom/bun/miitmdid/interfaces/IdSupplier;)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/china/api/TYChinaSDKHandler$1;->val$oaidSDKListener:Lcom/tkay/china/api/OaidSDKCallbackListener;

    if-eqz v0, :cond_0

    .line 41
    invoke-interface {v0, p1, p2}, Lcom/tkay/china/api/OaidSDKCallbackListener;->OnSupport(ZLcom/bun/miitmdid/interfaces/IdSupplier;)V

    :cond_0
    return-void
.end method

.method public onSupport(Lcom/bun/miitmdid/interfaces/IdSupplier;)V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/china/api/TYChinaSDKHandler$1;->val$oaidSDKListener:Lcom/tkay/china/api/OaidSDKCallbackListener;

    if-eqz v0, :cond_0

    .line 48
    invoke-interface {v0, p1}, Lcom/tkay/china/api/OaidSDKCallbackListener;->onSupport(Lcom/bun/miitmdid/interfaces/IdSupplier;)V

    :cond_0
    return-void
.end method
