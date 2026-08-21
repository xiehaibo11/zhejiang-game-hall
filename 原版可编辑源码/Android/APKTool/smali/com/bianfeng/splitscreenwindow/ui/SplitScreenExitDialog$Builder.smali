.class public Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;
.super Ljava/lang/Object;
.source "SplitScreenExitDialog.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Builder"
.end annotation


# instance fields
.field private exit_btn:Landroid/widget/Button;

.field private mActivity:Landroid/app/Activity;

.field private mLayout:Landroid/widget/LinearLayout;

.field private screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 5

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->mActivity:Landroid/app/Activity;

    .line 33
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.style.reslib_dialogactivitytheme"

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    invoke-direct {v0, p1, v1, v2}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;-><init>(Landroid/content/Context;ILcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$1;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    const-string v0, "layout_inflater"

    .line 34
    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/LayoutInflater;

    .line 35
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v3, "R.layout.dialog_splitscreen_exit"

    invoke-virtual {v1, p1, v3}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->mLayout:Landroid/widget/LinearLayout;

    .line 36
    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    const/4 v3, -0x1

    const/4 v4, -0x2

    invoke-direct {v2, v3, v4}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v0, v2}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;->addContentView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 37
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->mLayout:Landroid/widget/LinearLayout;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;

    move-result-object v1

    const-string v2, "R.id.dialog_split_exit"

    invoke-virtual {v1, p1, v2}, Lcom/bianfeng/utilslib/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {v0, p1}, Landroid/widget/LinearLayout;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->exit_btn:Landroid/widget/Button;

    .line 38
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->setAttributes()V

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)Landroid/app/Activity;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->mActivity:Landroid/app/Activity;

    return-object p0
.end method

.method private onClick()V
    .locals 2

    .line 53
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->exit_btn:Landroid/widget/Button;

    new-instance v1, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder$1;-><init>(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private setAttributes()V
    .locals 6

    .line 42
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    .line 43
    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v1

    .line 44
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v2

    iget-object v3, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->mActivity:Landroid/app/Activity;

    invoke-virtual {v2, v3}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand(Landroid/app/Activity;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 45
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result v2

    int-to-double v2, v2

    const-wide v4, 0x3fd999999999999aL    # 0.4

    invoke-static {v2, v3}, Ljava/lang/Double;->isNaN(D)Z

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_0

    .line 47
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result v2

    int-to-double v2, v2

    const-wide v4, 0x3fe999999999999aL    # 0.8

    invoke-static {v2, v3}, Ljava/lang/Double;->isNaN(D)Z

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v1, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 49
    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public create()Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;
    .locals 1

    .line 62
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->onClick()V

    .line 63
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->screenDialog:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    return-object v0
.end method
