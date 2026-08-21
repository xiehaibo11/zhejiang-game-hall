.class public Lcom/kwad/components/core/webview/jshandler/n$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/jshandler/n;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public adStyle:I

.field public creativeId:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->creativeId:J

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/webview/jshandler/n$a;->adStyle:I

    return-void
.end method
