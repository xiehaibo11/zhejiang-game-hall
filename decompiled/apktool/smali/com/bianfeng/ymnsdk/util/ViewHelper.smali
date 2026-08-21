.class public Lcom/bianfeng/ymnsdk/util/ViewHelper;
.super Ljava/lang/Object;
.source "ViewHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static setLogoView(Landroid/app/Activity;Landroid/view/View;JLjava/util/Observer;)V
    .locals 5
    .param p0, "activity"    # Landroid/app/Activity;
    .param p1, "logoView"    # Landroid/view/View;
    .param p2, "delayMillis"    # J
    .param p4, "callback"    # Ljava/util/Observer;

    .line 16
    const v0, 0x1020002

    :try_start_0
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 17
    .local v0, "parent":Landroid/view/ViewGroup;
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 18
    .local v2, "contentView":Landroid/view/View;
    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 20
    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    const/4 v4, -0x1

    invoke-direct {v3, v4, v4}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, p1, v1, v3}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 22
    new-instance v3, Landroid/os/Handler;

    new-instance v4, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;

    invoke-direct {v4, v0, p1, v2, p4}, Lcom/bianfeng/ymnsdk/util/ViewHelper$1;-><init>(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/View;Ljava/util/Observer;)V

    invoke-direct {v3, v4}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    .line 31
    .local v3, "handler":Landroid/os/Handler;
    invoke-virtual {v3, v1, p2, p3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 34
    nop

    .end local v0    # "parent":Landroid/view/ViewGroup;
    .end local v2    # "contentView":Landroid/view/View;
    .end local v3    # "handler":Landroid/os/Handler;
    goto :goto_0

    .line 32
    :catch_0
    move-exception v0

    .line 33
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 35
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method
