.class final Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;
.super Ljava/lang/Object;
.source "NativeProgressController.java"

# interfaces
.implements Ljava/lang/Runnable;


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

    .line 100
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/d$2;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->c(Lcom/mbridge/msdk/mbjscommon/confirmation/d;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setProgress(I)V

    return-void
.end method
