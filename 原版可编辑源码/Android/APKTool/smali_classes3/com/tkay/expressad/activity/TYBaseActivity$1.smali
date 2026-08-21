.class final Lcom/tkay/expressad/activity/TYBaseActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/activity/TYBaseActivity;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/activity/TYBaseActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/activity/TYBaseActivity;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 83
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_a

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual {v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getRootWindowInsets()Landroid/view/WindowInsets;

    move-result-object v0

    const/4 v1, -0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_9

    .line 88
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1c

    if-lt v3, v4, :cond_9

    .line 89
    invoke-virtual {v0}, Landroid/view/WindowInsets;->getDisplayCutout()Landroid/view/DisplayCutout;

    move-result-object v0

    if-eqz v0, :cond_9

    .line 92
    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetLeft()I

    move-result v3

    .line 93
    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetRight()I

    move-result v4

    .line 94
    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetTop()I

    move-result v5

    .line 95
    invoke-virtual {v0}, Landroid/view/DisplayCutout;->getSafeInsetBottom()I

    move-result v0

    .line 97
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "NOTCH Left:"

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " Right:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " Top:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, " Bottom:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 99
    iget-object v6, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v6}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v6

    .line 101
    iget-object v7, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v7}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v7

    const/4 v8, 0x3

    const/4 v9, 0x2

    const/4 v10, 0x1

    if-ne v7, v1, :cond_4

    .line 102
    iget-object v7, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    if-nez v6, :cond_0

    move v11, v8

    goto :goto_0

    :cond_0
    if-ne v6, v10, :cond_1

    move v11, v10

    goto :goto_0

    :cond_1
    if-ne v6, v9, :cond_2

    const/4 v11, 0x4

    goto :goto_0

    :cond_2
    if-ne v6, v8, :cond_3

    move v11, v9

    goto :goto_0

    :cond_3
    move v11, v1

    :goto_0
    invoke-static {v7, v11}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I

    .line 103
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v11, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v11}, Lcom/tkay/expressad/activity/TYBaseActivity;->b(Lcom/tkay/expressad/activity/TYBaseActivity;)I

    move-result v11

    invoke-virtual {v7, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    :cond_4
    if-eqz v6, :cond_8

    if-eq v6, v10, :cond_7

    if-eq v6, v9, :cond_6

    if-eq v6, v8, :cond_5

    :goto_1
    move v6, v0

    goto :goto_2

    :cond_5
    const/16 v1, 0x10e

    goto :goto_1

    :cond_6
    const/16 v1, 0xb4

    goto :goto_1

    :cond_7
    const/16 v1, 0x5a

    goto :goto_1

    :cond_8
    move v6, v0

    goto :goto_3

    :cond_9
    move v3, v2

    move v4, v3

    move v5, v4

    move v6, v5

    :goto_2
    move v2, v1

    .line 124
    :goto_3
    iget-object v1, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/activity/TYBaseActivity;->a(IIIII)V

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->c(Lcom/tkay/expressad/activity/TYBaseActivity;)Landroid/view/OrientationEventListener;

    move-result-object v0

    if-nez v0, :cond_a

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity$1;->a:Lcom/tkay/expressad/activity/TYBaseActivity;

    invoke-static {v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->d(Lcom/tkay/expressad/activity/TYBaseActivity;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_a
    return-void

    :catchall_0
    move-exception v0

    .line 131
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
