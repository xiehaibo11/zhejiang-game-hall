.class public Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;
.super Ljava/lang/Object;
.source "SplitScreenWindowManager.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private changeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

.field private volatile isPause:Z

.field private volatile isPaying:Z

.field private volatile isPlaying:Z

.field private volatile isResume:Z

.field private volatile isShowing:Z

.field private showType:Lcom/bianfeng/splitscreenwindow/ShowType;

.field private splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

.field private webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

.field private webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 17
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPause:Z

    .line 18
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isResume:Z

    .line 19
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    .line 20
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPlaying:Z

    .line 22
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    .line 66
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$1;-><init>(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    .line 194
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$2;-><init>(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->changeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    .line 35
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    .line 36
    invoke-direct {p0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->init(Landroid/app/Activity;)V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;
    .locals 0

    .line 12
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    return-object p0
.end method

.method static synthetic access$102(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Lcom/bianfeng/splitscreenwindow/ShowType;)Lcom/bianfeng/splitscreenwindow/ShowType;
    .locals 0

    .line 12
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showType:Lcom/bianfeng/splitscreenwindow/ShowType;

    return-object p1
.end method

.method static synthetic access$200(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showQuanping()V

    return-void
.end method

.method static synthetic access$300(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showFenping()V

    return-void
.end method

.method static synthetic access$402(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z
    .locals 0

    .line 12
    iput-boolean p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    return p1
.end method

.method static synthetic access$502(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z
    .locals 0

    .line 12
    iput-boolean p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPlaying:Z

    return p1
.end method

.method static synthetic access$600(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showDailog()V

    return-void
.end method

.method static synthetic access$700(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Z
    .locals 0

    .line 12
    iget-boolean p0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPause:Z

    return p0
.end method

.method static synthetic access$702(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;Z)Z
    .locals 0

    .line 12
    iput-boolean p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPause:Z

    return p1
.end method

.method static synthetic access$800(Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;)Landroid/app/Activity;
    .locals 0

    .line 12
    iget-object p0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    return-object p0
.end method

.method private init(Landroid/app/Activity;)V
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    if-nez v0, :cond_0

    .line 40
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    invoke-direct {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    .line 41
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->changeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    invoke-static {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->setListener(Landroid/app/Activity;Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;)V

    .line 43
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    if-nez v0, :cond_1

    .line 44
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-direct {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;-><init>(Landroid/app/Activity;)V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    .line 45
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webInterface:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setWebInterface(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;)V

    :cond_1
    return-void
.end method

.method private show()V
    .locals 2

    .line 118
    sget-object v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager$3;->$SwitchMap$com$bianfeng$splitscreenwindow$ShowType:[I

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showType:Lcom/bianfeng/splitscreenwindow/ShowType;

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenwindow/ShowType;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 125
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showQuanping()V

    goto :goto_0

    .line 121
    :cond_1
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showFenping()V

    :goto_0
    return-void
.end method

.method private showDailog()V
    .locals 2

    .line 102
    :try_start_0
    new-instance v0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog$Builder;->create()Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenExitDialog;->show()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private showFenping()V
    .locals 2

    .line 139
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    if-eqz v0, :cond_1

    .line 140
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewVisibility()V

    .line 141
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    const-string v1, "\u5168\u5c4f"

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewTag(Ljava/lang/String;)V

    .line 142
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand(Landroid/app/Activity;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 143
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewRotation(F)V

    goto :goto_0

    .line 145
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    const/high16 v1, -0x3d4c0000    # -90.0f

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewRotation(F)V

    .line 147
    :goto_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->showFenping(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    :cond_1
    return-void
.end method

.method private showQuanping()V
    .locals 2

    .line 131
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    if-eqz v0, :cond_0

    .line 132
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewVisibility()V

    .line 133
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    const-string v1, "\u5206\u5c4f"

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->setIconViewTag(Ljava/lang/String;)V

    .line 134
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0, v1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->showQuanping(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public closeWindow()V
    .locals 1

    .line 57
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    .line 59
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->remove()V

    const/4 v0, 0x0

    .line 60
    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    .line 61
    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    .line 62
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->removeListener()V

    :cond_0
    return-void
.end method

.method public onDestory()V
    .locals 1

    .line 188
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    if-eqz v0, :cond_0

    return-void

    .line 191
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->remove()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 175
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    if-eqz v0, :cond_0

    return-void

    .line 178
    :cond_0
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPlaying:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 181
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPause:Z

    const/4 v0, 0x0

    .line 182
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isResume:Z

    .line 183
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "onPause---------"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 184
    invoke-virtual {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->remove()V

    return-void
.end method

.method public onResume(Landroid/app/Activity;)V
    .locals 2

    .line 152
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    .line 153
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    if-eqz v0, :cond_0

    return-void

    .line 156
    :cond_0
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPlaying:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 157
    iput-boolean v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPlaying:Z

    return-void

    .line 160
    :cond_1
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPause:Z

    if-nez v0, :cond_2

    return-void

    .line 163
    :cond_2
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isResume:Z

    if-eqz v0, :cond_3

    .line 164
    iput-boolean v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isResume:Z

    return-void

    :cond_3
    const/4 v0, 0x1

    .line 167
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isResume:Z

    .line 168
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    const-string v1, "onResume---------"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 169
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->changeListener:Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;

    invoke-static {p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->setListener(Landroid/app/Activity;Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener$OnSoftKeyBoardChangeListener;)V

    .line 170
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->show()V

    return-void
.end method

.method public remove()V
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->splitScreenWindow:Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;

    if-eqz v0, :cond_0

    .line 51
    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->remove()V

    .line 52
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/ui/SoftKeyBoardListener;->removeListener()V

    :cond_0
    return-void
.end method

.method public setPaying()V
    .locals 1

    .line 25
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isPaying:Z

    .line 27
    invoke-virtual {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->onPause()V

    :cond_0
    return-void
.end method

.method public setShowType(Lcom/bianfeng/splitscreenwindow/ShowType;)V
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->showType:Lcom/bianfeng/splitscreenwindow/ShowType;

    return-void
.end method

.method public show(Ljava/lang/String;)V
    .locals 3

    .line 108
    iget-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    if-nez v0, :cond_0

    .line 109
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "show  is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 110
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->activity:Landroid/app/Activity;

    invoke-direct {p0, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->init(Landroid/app/Activity;)V

    const/4 v0, 0x1

    .line 111
    iput-boolean v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->isShowing:Z

    .line 112
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->show(Ljava/lang/String;)V

    .line 113
    invoke-direct {p0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindowManager;->show()V

    :cond_0
    return-void
.end method
