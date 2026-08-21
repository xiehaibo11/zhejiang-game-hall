.class final Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;
.super Ljava/lang/Object;
.source "NativeProgressController.java"

# interfaces
.implements Lcom/mbridge/msdk/out/IDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V
    .locals 0

    .line 299
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnd(IILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a(I)V

    return-void
.end method

.method public final onStart()V
    .locals 0

    return-void
.end method

.method public final onStatus(I)V
    .locals 1

    .line 317
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)I

    move-result v0

    if-eq v0, p1, :cond_0

    .line 318
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)I

    .line 319
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$3;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b(Lcom/mbridge/msdk/mbjscommon/confirmation/d;I)V

    :cond_0
    return-void
.end method
