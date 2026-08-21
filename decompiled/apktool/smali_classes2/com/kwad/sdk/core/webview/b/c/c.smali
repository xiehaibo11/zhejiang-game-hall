.class public final Lcom/kwad/sdk/core/webview/b/c/c;
.super Ljava/lang/Object;


# static fields
.field private static final ayS:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "application/x-javascript"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/jpeg"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/tiff"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "text/css"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "text/html"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/gif"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/png"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "application/javascript"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "video/mp4"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "audio/mpeg"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "application/json"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/webp"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/apng"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "image/svg+xml"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    const-string v1, "application/octet-stream"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static ej(Ljava/lang/String;)Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/webview/b/c/c;->ayS:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method
