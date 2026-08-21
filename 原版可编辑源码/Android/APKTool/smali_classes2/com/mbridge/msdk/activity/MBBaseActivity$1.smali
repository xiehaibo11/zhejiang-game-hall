.class final Lcom/mbridge/msdk/activity/MBBaseActivity$1;
.super Ljava/lang/Object;
.source "MBBaseActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/activity/MBBaseActivity;->getNotchParams()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/activity/MBBaseActivity;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/activity/MBBaseActivity;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 13

    const-string v0, "MBBaseActivity"

    .line 84
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_b

    .line 85
    iget-object v1, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-virtual {v1}, Lcom/mbridge/msdk/activity/MBBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getRootWindowInsets()Landroid/view/WindowInsets;

    move-result-object v1

    const/4 v2, -0x1

    const/4 v3, 0x0

    if-eqz v1, :cond_a

    .line 89
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x1c

    if-lt v4, v5, :cond_a

    .line 90
    invoke-virtual {v1}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v1

    if-eqz v1, :cond_a

    .line 93
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v4

    .line 94
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetRight()I

    move-result v5

    .line 95
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v6

    .line 96
    invoke-virtual {v1}, Landroid/view/DisplayCutout;->getSafeInsetBottom()I

    move-result v1

    .line 98
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "NOTCH Left:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " Right:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " Top:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " Bottom:"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v0, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    iget-object v7, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v7}, Lcom/mbridge/msdk/activity/MBBaseActivity;->a(Lcom/mbridge/msdk/activity/MBBaseActivity;)Landroid/view/Display;

    move-result-object v7

    if-eqz v7, :cond_0

    .line 102
    iget-object v7, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v7}, Lcom/mbridge/msdk/activity/MBBaseActivity;->a(Lcom/mbridge/msdk/activity/MBBaseActivity;)Landroid/view/Display;

    move-result-object v7

    invoke-virtual {v7}, Landroid/view/Display;->getRotation()I

    move-result v7

    goto :goto_0

    .line 104
    :cond_0
    iget-object v7, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v7}, Lcom/mbridge/msdk/activity/MBBaseActivity;->b(Lcom/mbridge/msdk/activity/MBBaseActivity;)I

    move-result v7

    .line 107
    :goto_0
    iget-object v8, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v8}, Lcom/mbridge/msdk/activity/MBBaseActivity;->c(Lcom/mbridge/msdk/activity/MBBaseActivity;)I

    move-result v8

    const/4 v9, 0x3

    const/4 v10, 0x2

    const/4 v11, 0x1

    if-ne v8, v2, :cond_5

    .line 108
    iget-object v8, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    if-nez v7, :cond_1

    move v12, v9

    goto :goto_1

    :cond_1
    if-ne v7, v11, :cond_2

    move v12, v11

    goto :goto_1

    :cond_2
    if-ne v7, v10, :cond_3

    const/4 v12, 0x4

    goto :goto_1

    :cond_3
    if-ne v7, v9, :cond_4

    move v12, v10

    goto :goto_1

    :cond_4
    move v12, v2

    :goto_1
    invoke-static {v8, v12}, Lcom/mbridge/msdk/activity/MBBaseActivity;->a(Lcom/mbridge/msdk/activity/MBBaseActivity;I)I

    .line 109
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v12, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v12}, Lcom/mbridge/msdk/activity/MBBaseActivity;->c(Lcom/mbridge/msdk/activity/MBBaseActivity;)I

    move-result v12

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v12, ""

    invoke-virtual {v8, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v0, v8}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    if-eqz v7, :cond_9

    if-eq v7, v11, :cond_8

    if-eq v7, v10, :cond_7

    if-eq v7, v9, :cond_6

    :goto_2
    move v7, v1

    goto :goto_3

    :cond_6
    const/16 v2, 0x10e

    goto :goto_2

    :cond_7
    const/16 v2, 0xb4

    goto :goto_2

    :cond_8
    const/16 v2, 0x5a

    goto :goto_2

    :cond_9
    move v7, v1

    goto :goto_4

    :cond_a
    move v4, v3

    move v5, v4

    move v6, v5

    move v7, v6

    :goto_3
    move v3, v2

    .line 130
    :goto_4
    iget-object v2, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/activity/MBBaseActivity;->setTopControllerPadding(IIIII)V

    .line 132
    iget-object v1, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/activity/MBBaseActivity;->d(Lcom/mbridge/msdk/activity/MBBaseActivity;)Landroid/view/OrientationEventListener;

    move-result-object v1

    if-nez v1, :cond_b

    .line 133
    iget-object v1, p0, Lcom/mbridge/msdk/activity/MBBaseActivity$1;->a:Lcom/mbridge/msdk/activity/MBBaseActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/activity/MBBaseActivity;->e(Lcom/mbridge/msdk/activity/MBBaseActivity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_5

    :catch_0
    move-exception v1

    .line 137
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    :goto_5
    return-void
.end method
