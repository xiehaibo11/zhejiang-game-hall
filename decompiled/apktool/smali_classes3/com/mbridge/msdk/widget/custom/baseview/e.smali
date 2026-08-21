.class final Lcom/mbridge/msdk/widget/custom/baseview/e;
.super Ljava/lang/Object;
.source "StateManager.java"


# instance fields
.field private a:Z

.field private b:I


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V
    .locals 1

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->isEnabled()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/e;->a:Z

    .line 10
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getProgress()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/e;->b:I

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V
    .locals 0

    .line 14
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getProgress()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/e;->b:I

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;)V
    .locals 2

    .line 26
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getProgress()I

    move-result v0

    .line 1022
    iget v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/e;->b:I

    if-eq v0, v1, :cond_0

    .line 27
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->getProgress()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setProgress(I)V

    goto :goto_0

    .line 28
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->isEnabled()Z

    move-result v0

    .line 2018
    iget-boolean v1, p0, Lcom/mbridge/msdk/widget/custom/baseview/e;->a:Z

    if-eq v0, v1, :cond_1

    .line 29
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->isEnabled()Z

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;->setEnabled(Z)V

    :cond_1
    :goto_0
    return-void
.end method
