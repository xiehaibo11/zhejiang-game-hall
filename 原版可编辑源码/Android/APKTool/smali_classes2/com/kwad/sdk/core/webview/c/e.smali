.class public final Lcom/kwad/sdk/core/webview/c/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# instance fields
.field private final aiE:Ljava/lang/String;

.field private final result:I


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/core/webview/c/e;->result:I

    iput-object p2, p0, Lcom/kwad/sdk/core/webview/c/e;->aiE:Ljava/lang/String;

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

    iget v1, p0, Lcom/kwad/sdk/core/webview/c/e;->result:I

    const-string v2, "result"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/sdk/core/webview/c/e;->aiE:Ljava/lang/String;

    const-string v2, "error_msg"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
