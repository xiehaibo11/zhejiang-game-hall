.class public final Lcom/kwad/sdk/core/webview/d/b/a;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field public JC:Z

.field public JK:Z

.field public JT:Ljava/lang/String;

.field public UX:Z
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public UZ:I

.field public Va:Lcom/kwad/sdk/core/webview/d/b/c;

.field public adStyle:I

.field public azc:I

.field public azd:I

.field public creativeId:J

.field public jG:I


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->JK:Z

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->adStyle:I

    return-void
.end method


# virtual methods
.method public final Ek()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->UZ:I

    const/4 v1, 0x1

    if-ne v1, v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "logParam"

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->parseJson(Lorg/json/JSONObject;)V

    :try_start_0
    iget v1, p0, Lcom/kwad/sdk/core/webview/d/b/a;->jG:I

    if-nez v1, :cond_1

    iget v1, p0, Lcom/kwad/sdk/core/webview/d/b/a;->azd:I

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "itemClickType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/webview/d/b/a;->jG:I

    const-string v0, "sceneType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/webview/d/b/a;->azd:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    :goto_0
    return-void
.end method
