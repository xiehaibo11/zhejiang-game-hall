.class public Lcom/bianfeng/fastvo/action/SecurityToken;
.super Ljava/lang/Object;
.source "SecurityToken.java"


# instance fields
.field public AccessKeyId:Ljava/lang/String;

.field public AccessKeySecret:Ljava/lang/String;

.field public Expiration:Ljava/lang/String;

.field public SecurityToken:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lorg/json/JSONObject;)V
    .locals 1

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "AccessKeyId"

    .line 13
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/fastvo/action/SecurityToken;->AccessKeyId:Ljava/lang/String;

    const-string v0, "AccessKeySecret"

    .line 14
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/fastvo/action/SecurityToken;->AccessKeySecret:Ljava/lang/String;

    const-string v0, "SecurityToken"

    .line 15
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/fastvo/action/SecurityToken;->SecurityToken:Ljava/lang/String;

    const-string v0, "Expiration"

    .line 16
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/fastvo/action/SecurityToken;->Expiration:Ljava/lang/String;

    return-void
.end method
