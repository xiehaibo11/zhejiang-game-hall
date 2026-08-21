.class public final Lcom/kwad/sdk/core/webview/c/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field public final ayV:Lcom/kwad/sdk/core/b;

.field public final result:I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/b;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/core/webview/c/f;->result:I

    iput-object p1, p0, Lcom/kwad/sdk/core/webview/c/f;->ayV:Lcom/kwad/sdk/core/b;

    return-void
.end method


# virtual methods
.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget v1, p0, Lcom/kwad/sdk/core/webview/c/f;->result:I

    const-string v2, "result"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/c/f;->ayV:Lcom/kwad/sdk/core/b;

    const-string v2, "data"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object v0
.end method
