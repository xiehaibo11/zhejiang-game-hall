.class public Lcom/kwad/sdk/core/network/j;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public apg:Ljava/lang/String;

.field public aph:I

.field public api:Ljava/lang/String;

.field public errorMsg:Ljava/lang/String;

.field public host:Ljava/lang/String;

.field public httpCode:I

.field public url:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/core/network/j;->aph:I

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/j;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
