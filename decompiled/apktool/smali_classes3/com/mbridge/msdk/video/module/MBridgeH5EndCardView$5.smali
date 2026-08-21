.class final Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$5;
.super Ljava/lang/Object;
.source "MBridgeH5EndCardView.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V
    .locals 0

    .line 724
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$5;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 727
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$5;->a:Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->g(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/FeedBackButton;->setVisibility(I)V

    return-void
.end method
