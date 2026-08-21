.class public abstract Lcom/tkay/expressad/activity/TYBaseActivity;
.super Landroid/app/Activity;


# static fields
.field private static final a:Ljava/lang/String; = "TYBaseActivity"


# instance fields
.field private b:Landroid/view/OrientationEventListener;

.field private c:Landroid/view/Display;

.field private d:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 20
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, -0x1

    .line 25
    iput v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->d:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/activity/TYBaseActivity;)I
    .locals 0

    .line 20
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->c()I

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/activity/TYBaseActivity;I)I
    .locals 0

    .line 20
    iput p1, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->d:I

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/activity/TYBaseActivity;)I
    .locals 0

    .line 20
    iget p0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->d:I

    return p0
.end method

.method private b()V
    .locals 1

    .line 138
    new-instance v0, Lcom/tkay/expressad/activity/TYBaseActivity$2;

    invoke-direct {v0, p0, p0}, Lcom/tkay/expressad/activity/TYBaseActivity$2;-><init>(Lcom/tkay/expressad/activity/TYBaseActivity;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    .line 177
    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 178
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->enable()V

    return-void

    .line 180
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V

    const/4 v0, 0x0

    .line 181
    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    return-void
.end method

.method private c()I
    .locals 2

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->c:Landroid/view/Display;

    if-nez v0, :cond_1

    .line 187
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1e

    if-lt v0, v1, :cond_0

    .line 188
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getDisplay()Landroid/view/Display;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->c:Landroid/view/Display;

    goto :goto_0

    :cond_0
    const-string v0, "window"

    .line 190
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/WindowManager;

    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->c:Landroid/view/Display;

    .line 194
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->c:Landroid/view/Display;

    if-eqz v0, :cond_2

    .line 196
    :try_start_0
    invoke-virtual {v0}, Landroid/view/Display;->getRotation()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    :cond_2
    const/4 v0, -0x1

    return v0
.end method

.method static synthetic c(Lcom/tkay/expressad/activity/TYBaseActivity;)Landroid/view/OrientationEventListener;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 206
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    .line 207
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/high16 v1, 0x4000000

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 209
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1002

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    return-void

    .line 211
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 214
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/activity/TYBaseActivity;)V
    .locals 1

    .line 1138
    new-instance v0, Lcom/tkay/expressad/activity/TYBaseActivity$2;

    invoke-direct {v0, p0, p0}, Lcom/tkay/expressad/activity/TYBaseActivity$2;-><init>(Lcom/tkay/expressad/activity/TYBaseActivity;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    .line 1177
    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->canDetectOrientation()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1178
    iget-object p0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    invoke-virtual {p0}, Landroid/view/OrientationEventListener;->enable()V

    return-void

    .line 1180
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V

    const/4 v0, 0x0

    .line 1181
    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 4

    .line 74
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/activity/TYBaseActivity$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/activity/TYBaseActivity$1;-><init>(Lcom/tkay/expressad/activity/TYBaseActivity;)V

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public abstract a(IIIII)V
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    .line 29
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, 0x1

    .line 31
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/activity/TYBaseActivity;->requestWindowFeature(I)Z

    .line 32
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x400

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    .line 33
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x200

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->d()V

    .line 36
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->c()I

    .line 38
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-lt v0, v1, :cond_0

    .line 39
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 40
    iput p1, v0, Landroid/view/WindowManager$LayoutParams;->layoutInDisplayCutoutMode:I

    .line 41
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 66
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 67
    iget-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    if-eqz v0, :cond_0

    .line 68
    invoke-virtual {v0}, Landroid/view/OrientationEventListener;->disable()V

    const/4 v0, 0x0

    .line 69
    iput-object v0, p0, Lcom/tkay/expressad/activity/TYBaseActivity;->b:Landroid/view/OrientationEventListener;

    :cond_0
    return-void
.end method

.method protected onResume()V
    .locals 1

    .line 50
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 51
    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 54
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->a()V

    .line 55
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->d()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    .line 60
    invoke-super {p0, p1}, Landroid/app/Activity;->onWindowFocusChanged(Z)V

    .line 61
    invoke-direct {p0}, Lcom/tkay/expressad/activity/TYBaseActivity;->d()V

    return-void
.end method
