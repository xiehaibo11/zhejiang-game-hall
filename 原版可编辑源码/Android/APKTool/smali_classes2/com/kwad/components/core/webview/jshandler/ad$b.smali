.class public Lcom/kwad/components/core/webview/jshandler/ad$b;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/ad;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field public creativeId:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/ad$b;->creativeId:J

    return-void
.end method
