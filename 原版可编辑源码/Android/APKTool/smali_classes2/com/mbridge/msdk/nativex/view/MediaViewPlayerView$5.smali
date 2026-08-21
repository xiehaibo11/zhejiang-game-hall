.class final Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;
.super Ljava/lang/Object;
.source "MediaViewPlayerView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->gonePauseView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 624
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "MediaViewPlayerView"

    .line 628
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    .line 629
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    const-string v1, "gonePauseView"

    .line 630
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 632
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
