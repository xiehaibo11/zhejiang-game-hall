.class public final Lcom/kwad/components/core/webview/b/b/k;
.super Lcom/kwad/sdk/core/response/a/a;


# instance fields
.field public WW:I

.field public WX:I

.field public WY:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/webview/b/b/k;->WX:I

    return-void
.end method


# virtual methods
.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget v1, p0, Lcom/kwad/components/core/webview/b/b/k;->WW:I

    const-string v2, "insertScreenAdShowStrategy"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/components/core/webview/b/b/k;->WY:I

    const-string v2, "isAutoShow"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/components/core/webview/b/b/k;->WX:I

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    const-string v2, "triggerType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_0
    return-object v0
.end method
