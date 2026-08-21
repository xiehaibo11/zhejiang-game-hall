.class final Lcom/bianfeng/fastvo/action/FastvoOssClientFactory$1;
.super Lcom/alibaba/sdk/android/oss/common/auth/OSSFederationCredentialProvider;
.source "FastvoOssClientFactory.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/fastvo/action/FastvoOssClientFactory;->create(Landroid/content/Context;)Lcom/alibaba/sdk/android/oss/OSS;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$context:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/bianfeng/fastvo/action/FastvoOssClientFactory$1;->val$context:Landroid/content/Context;

    invoke-direct {p0}, Lcom/alibaba/sdk/android/oss/common/auth/OSSFederationCredentialProvider;-><init>()V

    return-void
.end method


# virtual methods
.method public getFederationToken()Lcom/alibaba/sdk/android/oss/common/auth/OSSFederationToken;
    .locals 5

    .line 24
    new-instance v0, Lcom/bianfeng/fastvo/action/OssStsAction;

    iget-object v1, p0, Lcom/bianfeng/fastvo/action/FastvoOssClientFactory$1;->val$context:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/bianfeng/fastvo/action/OssStsAction;-><init>(Landroid/content/Context;)V

    .line 25
    invoke-virtual {v0}, Lcom/bianfeng/fastvo/action/OssStsAction;->start()Lcom/bianfeng/fastvo/action/SecurityToken;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 28
    new-instance v1, Lcom/alibaba/sdk/android/oss/common/auth/OSSFederationToken;

    iget-object v2, v0, Lcom/bianfeng/fastvo/action/SecurityToken;->AccessKeyId:Ljava/lang/String;

    iget-object v3, v0, Lcom/bianfeng/fastvo/action/SecurityToken;->AccessKeySecret:Ljava/lang/String;

    iget-object v4, v0, Lcom/bianfeng/fastvo/action/SecurityToken;->SecurityToken:Ljava/lang/String;

    iget-object v0, v0, Lcom/bianfeng/fastvo/action/SecurityToken;->Expiration:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4, v0}, Lcom/alibaba/sdk/android/oss/common/auth/OSSFederationToken;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "----token \u4e3a\u7a7a->"

    .line 30
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const/4 v1, 0x0

    :goto_0
    return-object v1
.end method
