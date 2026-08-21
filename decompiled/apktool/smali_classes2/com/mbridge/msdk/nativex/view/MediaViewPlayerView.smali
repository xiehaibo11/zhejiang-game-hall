.class public Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;
.super Landroid/widget/LinearLayout;
.source "MediaViewPlayerView.java"

# interfaces
.implements Lcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;,
        Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;
    }
.end annotation


# static fields
.field private static F:Landroid/os/Handler;


# instance fields
.field private A:Ljava/lang/String;

.field private B:Ljava/lang/String;

.field private C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private D:Lcom/mbridge/msdk/nativex/listener/a;

.field private E:Ljava/util/Timer;

.field private G:Lcom/mbridge/msdk/videocommon/download/a;

.field private H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

.field private I:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;

.field private J:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

.field private L:Z

.field private a:Z

.field private b:Z

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:Z

.field private g:Z

.field private h:Z

.field private i:Z

.field private j:Z

.field private k:Z

.field private volatile l:I

.field private m:Z

.field private n:Z

.field private o:Landroid/view/TextureView;

.field private p:Landroid/widget/LinearLayout;

.field private q:Landroid/view/Surface;

.field private r:Landroid/widget/ProgressBar;

.field private s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

.field private t:Landroid/widget/ImageView;

.field private u:Landroid/widget/ImageView;

.field private v:Landroid/widget/ImageView;

.field private w:Landroid/widget/ImageView;

.field private x:Landroid/view/View;

.field private y:Landroid/graphics/drawable/AnimationDrawable;

.field private z:Landroid/view/animation/AlphaAnimation;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 102
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->F:Landroid/os/Handler;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 117
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a:Z

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b:Z

    .line 61
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    .line 62
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    .line 64
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    .line 65
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    .line 67
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g:Z

    const/4 v0, 0x1

    .line 69
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h:Z

    .line 71
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i:Z

    .line 73
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    .line 75
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    const/4 v1, -0x1

    .line 76
    iput v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l:I

    .line 80
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m:Z

    .line 81
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->n:Z

    const/4 v0, 0x0

    .line 107
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->J:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 108
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 110
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->L:Z

    .line 118
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 122
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 57
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a:Z

    .line 59
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b:Z

    .line 61
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    .line 62
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    .line 64
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    .line 65
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    .line 67
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g:Z

    const/4 p2, 0x1

    .line 69
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h:Z

    .line 71
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i:Z

    .line 73
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    .line 75
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    const/4 v0, -0x1

    .line 76
    iput v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l:I

    .line 80
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m:Z

    .line 81
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->n:Z

    const/4 p2, 0x0

    .line 107
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->J:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    .line 108
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 110
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->L:Z

    .line 123
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Landroid/view/Surface;)Landroid/view/Surface;
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q:Landroid/view/Surface;

    return-object p1
.end method

.method private a()V
    .locals 2

    .line 128
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c()V

    .line 129
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 131
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/nativex/listener/a;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    return-object p0
.end method

.method private b()V
    .locals 1

    .line 136
    new-instance v0, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-direct {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    .line 137
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->setSelfVideoFeedsPlayerListener(Lcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Landroid/widget/ImageView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    return-object p0
.end method

.method private c()V
    .locals 5

    const-string v0, "id"

    .line 142
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_nativex_playerview"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 143
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v1, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 145
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "mbridge_ll_loading"

    invoke-static {v2, v4, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/LinearLayout;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->p:Landroid/widget/LinearLayout;

    .line 146
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v4, "mbridge_textureview"

    invoke-static {v2, v4, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/view/TextureView;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->o:Landroid/view/TextureView;

    const/4 v4, 0x1

    .line 147
    invoke-virtual {v2, v4}, Landroid/view/TextureView;->setKeepScreenOn(Z)V

    .line 148
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->o:Landroid/view/TextureView;

    new-instance v4, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;

    invoke-direct {v4, p0, v3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$1;)V

    invoke-virtual {v2, v4}, Landroid/view/TextureView;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    .line 149
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_progress"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ProgressBar;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    .line 150
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_iv_playend_pic"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/videocommon/view/MyImageView;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    .line 151
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_iv_play"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    .line 152
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_iv_pause"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    .line 153
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_iv_sound"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    .line 154
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_view_cover"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->x:Landroid/view/View;

    .line 155
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    const-string v3, "mbridge_iv_sound_animation"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->w:Landroid/widget/ImageView;

    .line 156
    invoke-virtual {v0}, Landroid/widget/ImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    check-cast v0, Landroid/graphics/drawable/AnimationDrawable;

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->y:Landroid/graphics/drawable/AnimationDrawable;

    .line 157
    invoke-virtual {v0}, Landroid/graphics/drawable/AnimationDrawable;->start()V

    .line 158
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d()V

    const/4 v0, -0x1

    .line 159
    invoke-virtual {p0, v1, v0, v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->addView(Landroid/view/View;II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 162
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i:Z

    return p1
.end method

.method private d()V
    .locals 2

    .line 489
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$1;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 510
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$2;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 528
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$3;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i()V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    return p1
.end method

.method private e()V
    .locals 2

    .line 641
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    .line 642
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 643
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i()V

    .line 644
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k()V

    .line 645
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 647
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k()V

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h:Z

    return p1
.end method

.method static synthetic f(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Landroid/widget/ImageView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    return-object p0
.end method

.method private f()V
    .locals 2

    .line 653
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    .line 654
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 655
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j()V

    .line 656
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->n:Z

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->showProgressView(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 658
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private g()V
    .locals 2

    .line 663
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->w:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 664
    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m:Z

    if-eqz v0, :cond_0

    .line 665
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->w:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 3

    .line 3858
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l()V

    .line 3859
    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->E:Ljava/util/Timer;

    .line 3860
    new-instance v0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$7;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$7;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    .line 3870
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->E:Ljava/util/Timer;

    const-wide/16 v1, 0x7d0

    invoke-virtual {p0, v0, v1, v2}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    return-void
.end method

.method private h()V
    .locals 2

    .line 670
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->w:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 671
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->w:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j()V

    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    return-object p0
.end method

.method private i()V
    .locals 2

    .line 692
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->x:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method

.method private j()V
    .locals 2

    .line 696
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 697
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->x:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    return p0
.end method

.method private k()V
    .locals 2

    .line 702
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e()V

    return-void
.end method

.method static synthetic l(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method private l()V
    .locals 2

    .line 875
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->F:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 876
    sget-object v0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->F:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 878
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->E:Ljava/util/Timer;

    if-eqz v0, :cond_1

    .line 879
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->E:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 882
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private m()Ljava/lang/String;
    .locals 6

    const-string v0, "MediaViewPlayerView"

    const/4 v1, 0x0

    .line 888
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v2, :cond_0

    return-object v1

    .line 892
    :cond_0
    :try_start_1
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v2, :cond_3

    .line 894
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v2

    const/16 v3, 0x11f

    if-eq v2, v3, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v2

    const/16 v3, 0x5e

    if-ne v2, v3, :cond_1

    goto :goto_0

    .line 897
    :cond_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    .line 895
    :cond_2
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 899
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->A:Ljava/lang/String;

    invoke-virtual {v3, v4, v2}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v2

    .line 902
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 904
    :cond_3
    :goto_2
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v2, :cond_4

    .line 905
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v2

    .line 906
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u672c\u5730\u5df2\u4e0b\u8f7d\u5b8c \u62ff\u672c\u5730\u64ad\u653e\u5730\u5740\uff1aJinr state\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x5

    if-ne v2, v3, :cond_4

    .line 908
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/download/a;->d()Ljava/lang/String;

    move-result-object v3

    .line 909
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_4

    .line 911
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u672c\u5730\u5df2\u4e0b\u8f7d\u5b8c \u62ff\u672c\u5730\u64ad\u653e\u5730\u5740\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " state\uff1a"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v3

    .line 954
    :cond_4
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v2

    .line 955
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 956
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u672c\u5730\u5c1a\u672a\u4e0b\u8f7d\u5b8c \u62ff\u7f51\u7edc\u5730\u5740\uff1a"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-object v2

    :catch_1
    move-exception v2

    .line 960
    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return-object v1
.end method

.method static synthetic m(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Ljava/lang/String;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    return p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h:Z

    return p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b:Z

    return p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/playercommon/VideoNativePlayer;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    return-object p0
.end method


# virtual methods
.method public closeSound()V
    .locals 4

    const/4 v0, 0x0

    .line 388
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    .line 390
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 391
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_nativex_sound_close"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 392
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->closeSound()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 395
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_1

    .line 396
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->volumeChange(F)V
    :try_end_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_2
    const-string v1, "OMSDK"

    .line 399
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 402
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public curIsFullScreen()Z
    .locals 1

    .line 465
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    return v0
.end method

.method public getCampaign()Lcom/mbridge/msdk/out/Campaign;
    .locals 1

    .line 477
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public getIsActiviePause()Z
    .locals 1

    .line 473
    iget-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    return v0
.end method

.method public gonePauseView()V
    .locals 2

    .line 623
    sget-object v0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->F:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 624
    new-instance v1, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$5;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public halfLoadingViewisVisible()Z
    .locals 2

    .line 418
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->loadingViewIsVisible()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :catchall_0
    move-exception v0

    .line 422
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public hasPrepare()Z
    .locals 2

    .line 331
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 332
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->hasPrepare()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 335
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public initPlayerViewData(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;Lcom/mbridge/msdk/videocommon/download/a;Ljava/lang/String;)Z
    .locals 9

    const-string v0, "MediaViewPlayerView"

    const/4 v1, 0x1

    const/4 v2, 0x0

    .line 176
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    const-string p1, "playUrl==null return "

    .line 177
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    :cond_0
    if-nez p2, :cond_1

    const-string p1, "campaign ==null return "

    .line 181
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 184
    :cond_1
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    .line 185
    iput-boolean p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b:Z

    .line 186
    iput-object p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 187
    iput-object p5, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->G:Lcom/mbridge/msdk/videocommon/download/a;

    .line 188
    iput-object p6, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->A:Ljava/lang/String;

    .line 189
    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    iget-boolean v6, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    iget-object v7, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    move-object v8, p4

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->initParameter(Ljava/lang/String;ZZLandroid/view/View;Lcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1818
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez p1, :cond_2

    goto :goto_0

    .line 1821
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p1

    .line 1822
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_3

    const-string p1, "imageUrl isnull initPlayEndPic return"

    .line 1823
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1826
    :cond_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object p2

    if-nez p2, :cond_4

    goto :goto_0

    .line 1829
    :cond_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_5

    .line 1830
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p2

    .line 1831
    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    if-eqz p3, :cond_6

    if-eqz p2, :cond_6

    .line 1832
    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {p3, p1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setImageUrl(Ljava/lang/String;)V

    .line 1833
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 1834
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setVisibility(I)V

    goto :goto_0

    .line 1837
    :cond_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object p2

    new-instance p3, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$6;

    invoke-direct {p3, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$6;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {p2, p1, p3}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1853
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 191
    :cond_6
    :goto_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a:Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 193
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a:Z

    :goto_1
    return v1
.end method

.method public isComplete()Z
    .locals 2

    .line 342
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 343
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->isComplete()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 346
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public isPlaying()Z
    .locals 2

    .line 353
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 354
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->isPlaying()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    .line 357
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public onBufferingEnd()V
    .locals 0

    return-void
.end method

.method public onBufferingStart(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onClickPlayButton()V
    .locals 6

    const-string v0, "MediaViewPlayerView"

    .line 541
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f()V

    .line 542
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j()V

    const/4 v1, 0x0

    .line 543
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->setIsComplete(Z)V

    .line 545
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    if-eqz v2, :cond_0

    .line 546
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->play()V

    goto :goto_0

    .line 548
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    if-nez v2, :cond_1

    .line 549
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "startOrPlayVideo() hasPrepare():"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " mIsNeedToRepeatPrepare:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 550
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->startOrPlayVideo()V

    goto :goto_0

    :cond_1
    const-string v2, "\u70b9\u51fb\u64ad\u653e playVideo()"

    .line 552
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 553
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q:Landroid/view/Surface;

    invoke-virtual {v2, v3, v4, v5}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->replaySameSource(Landroid/content/Context;Ljava/lang/String;Landroid/view/Surface;)V

    .line 557
    :goto_0
    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    if-eqz v2, :cond_2

    .line 558
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    if-eqz v2, :cond_2

    .line 559
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    invoke-interface {v2}, Lcom/mbridge/msdk/nativex/listener/a;->d()V

    .line 562
    :cond_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 564
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public onClickPlayerView()V
    .locals 4

    const-string v0, "MediaViewPlayerView"

    .line 573
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->getVisibility()I

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "playend is visibility return"

    .line 574
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 577
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isPlaying()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "isplaying return"

    .line 578
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 581
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    if-nez v1, :cond_2

    const-string v1, "pause id is null return"

    .line 582
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 585
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getVisibility()I

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "gone durview"

    .line 586
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 587
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->gonePauseView()V

    .line 588
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l()V

    goto :goto_0

    :cond_3
    const-string v1, "show durview"

    .line 590
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 591
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    if-eqz v1, :cond_4

    .line 592
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    invoke-virtual {v1}, Landroid/view/animation/AlphaAnimation;->cancel()V

    .line 594
    :cond_4
    new-instance v1, Landroid/view/animation/AlphaAnimation;

    const/4 v2, 0x0

    const/high16 v3, 0x3f800000    # 1.0f

    invoke-direct {v1, v2, v3}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    const-wide/16 v2, 0x12c

    .line 595
    invoke-virtual {v1, v2, v3}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    .line 596
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    new-instance v2, Landroid/view/animation/DecelerateInterpolator;

    invoke-direct {v2}, Landroid/view/animation/DecelerateInterpolator;-><init>()V

    invoke-virtual {v1, v2}, Landroid/view/animation/AlphaAnimation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    .line 597
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    new-instance v2, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$4;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$4;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    invoke-virtual {v1, v2}, Landroid/view/animation/AlphaAnimation;->setAnimationListener(Landroid/view/animation/Animation$AnimationListener;)V

    .line 610
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i()V

    .line 611
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->x:Landroid/view/View;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->z:Landroid/view/animation/AlphaAnimation;

    invoke-virtual {v1, v2}, Landroid/view/View;->startAnimation(Landroid/view/animation/Animation;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 614
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onPlayCompleted()V
    .locals 3

    const-string v0, "MediaViewPlayerView"

    const-string v1, "=========onPlayCompleted"

    .line 739
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 740
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 741
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-interface {v1, v2}, Lcom/mbridge/msdk/nativex/listener/a;->b(Ljava/lang/String;)V

    .line 744
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->I:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;

    if-eqz v1, :cond_1

    .line 745
    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;->a()V

    goto :goto_0

    .line 748
    :cond_1
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    if-nez v1, :cond_2

    const/4 v1, 0x1

    .line 749
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    const-string v1, "\u64ad\u653e\u7ed3\u675f \u4e0d\u80fd\u5faa\u73af\u64ad\u653e \u663e\u793aendcardView"

    .line 750
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 751
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 754
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public onPlayError(Ljava/lang/String;)V
    .locals 5

    const-string v0, "MediaViewPlayerView"

    .line 771
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onPlayError:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 772
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    .line 773
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e()V

    .line 775
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->L:Z

    if-nez v1, :cond_0

    .line 776
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q:Landroid/view/Surface;

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->play(Landroid/content/Context;Ljava/lang/String;Landroid/view/Surface;)V

    .line 777
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->L:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 780
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onPlayProgress(II)V
    .locals 1

    .line 715
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f()V

    .line 717
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g()V

    const/4 p2, 0x0

    .line 718
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    .line 719
    iput-boolean p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    .line 726
    iput p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 728
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MediaViewPlayerView"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public onPlayProgressMS(II)V
    .locals 1

    .line 2797
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    invoke-virtual {v0}, Landroid/widget/ProgressBar;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    if-lez p2, :cond_0

    .line 2799
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    invoke-virtual {v0, p2}, Landroid/widget/ProgressBar;->setMax(I)V

    :cond_0
    if-ltz p1, :cond_1

    add-int/lit8 p1, p1, 0x1

    .line 2803
    iget-object p2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    invoke-virtual {p2, p1}, Landroid/widget/ProgressBar;->setProgress(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 2808
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MediaViewPlayerView"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onPlaySetDataSourceError(Ljava/lang/String;)V
    .locals 3

    const-string v0, "MediaViewPlayerView"

    .line 787
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onPlaySetDataSourceError:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 788
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2967
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-static {p1}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "playerview  dwLocalAddressplayError playurl is network return"

    .line 2968
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 2971
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->C:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object p1

    .line 2972
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2973
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    .line 2974
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "playerview dwLocalAddressplayError \u7528\u7f51\u7edc\u5730\u5740\u6284\u5e95\u64ad\u653e"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 2977
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 791
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public onPlayStarted(I)V
    .locals 1

    .line 707
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 708
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/nativex/listener/a;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public openSound()V
    .locals 4

    const/4 v0, 0x1

    .line 366
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    .line 368
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "mbridge_nativex_sound_open"

    const-string v3, "drawable"

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 370
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->openSound()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 373
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_1

    .line 374
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->volumeChange(F)V
    :try_end_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_2
    const-string v1, "OMSDK"

    .line 377
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 380
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public pause()V
    .locals 2

    .line 290
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 291
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->pause()V

    const/4 v0, 0x1

    .line 292
    iput-boolean v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    .line 294
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_1

    .line 295
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->pause()V

    const-string v0, "omsdk"

    const-string v1, "videoEvents.pause()"

    .line 296
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 298
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 300
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public playVideo()V
    .locals 5

    const-string v0, "MediaViewPlayerView"

    .line 204
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a:Z

    if-nez v1, :cond_0

    const-string v1, "playVideo() init failed \u64ad\u653e\u5931\u8d25"

    .line 205
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 208
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-nez v1, :cond_1

    const-string v1, "playVideo() mVideoFeedsPlayer is null \u64ad\u653e\u5931\u8d25"

    .line 209
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 212
    :cond_1
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g:Z

    if-nez v1, :cond_2

    .line 213
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e()V

    const-string v1, "playVideo() mSurfaceTextureAvailable no init return"

    .line 214
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 217
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    const-string v2, "http"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    const-string v2, "https"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 218
    :cond_4
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    :cond_5
    const-string v1, "playVideo() play"

    .line 220
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 221
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f()V

    .line 222
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->B:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q:Landroid/view/Surface;

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->play(Landroid/content/Context;Ljava/lang/String;Landroid/view/Surface;)V

    .line 223
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    const/4 v2, 0x0

    if-nez v1, :cond_6

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    if-eqz v1, :cond_7

    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_7

    .line 224
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    .line 225
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->resume()V

    const-string v1, "omsdk"

    const-string v3, "videoEvents.resume()"

    .line 226
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    :cond_7
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k:Z

    if-eqz v1, :cond_8

    .line 230
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->openSound()V

    goto :goto_0

    .line 232
    :cond_8
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->closeSound()V

    .line 235
    :goto_0
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 237
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public registerView(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V
    .locals 3

    .line 1082
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->J:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz p1, :cond_0

    .line 1084
    invoke-virtual {p1, p0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 1085
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->p:Landroid/widget/LinearLayout;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1086
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1087
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->s:Lcom/mbridge/msdk/videocommon/view/MyImageView;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->VIDEO_CONTROLS:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1088
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->VIDEO_CONTROLS:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1089
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->u:Landroid/widget/ImageView;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->VIDEO_CONTROLS:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 1090
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    sget-object v1, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v0, v1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public release()V
    .locals 2

    .line 320
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->releasePlayer()V

    const/4 v0, 0x0

    .line 322
    iput-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 325
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public setAllowLoopPlay(Z)V
    .locals 0

    .line 481
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->j:Z

    return-void
.end method

.method public setEnterFullScreen()V
    .locals 3

    const-string v0, "MediaViewPlayerView"

    :try_start_0
    const-string v1, "setEnterFullScreen"

    .line 439
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x1

    .line 440
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    .line 441
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h:Z

    .line 442
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 443
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 445
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public setExitFullScreen()V
    .locals 3

    const-string v0, "MediaViewPlayerView"

    :try_start_0
    const-string v1, "setExitFullScreen"

    .line 451
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 452
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d:Z

    .line 454
    iput-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    const-string v1, "setExitFullScreen mIsNeedToRepeatPrepare=false"

    .line 455
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 456
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->v:Landroid/widget/ImageView;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 457
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g()V

    .line 458
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 460
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public setIsActivePause(Z)V
    .locals 0

    .line 469
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    return-void
.end method

.method public setIsComplete(Z)V
    .locals 1

    .line 429
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 430
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->setIsComplete(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 433
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MediaViewPlayerView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public setIsFrontDesk(Z)V
    .locals 1

    .line 408
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 409
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->setIsFrontDesk(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 412
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MediaViewPlayerView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public setMediaViewPlayListener(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->I:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$a;

    return-void
.end method

.method public setOnMediaViewPlayerViewListener(Lcom/mbridge/msdk/nativex/listener/a;)V
    .locals 0

    .line 485
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->D:Lcom/mbridge/msdk/nativex/listener/a;

    return-void
.end method

.method public setVideoEvents(Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;)V
    .locals 0

    .line 1095
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    return-void
.end method

.method public showPlayView()V
    .locals 2

    .line 619
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->t:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method public showProgressView(Z)V
    .locals 1

    .line 676
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->n:Z

    .line 677
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const/4 p1, 0x4

    .line 678
    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public showSoundIndicator(Z)V
    .locals 0

    .line 683
    iput-boolean p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m:Z

    if-eqz p1, :cond_0

    .line 685
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g()V

    goto :goto_0

    .line 687
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h()V

    :goto_0
    return-void
.end method

.method public startOrPlayVideo()V
    .locals 4

    const-string v0, "MediaViewPlayerView"

    .line 243
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startOrPlayVideo() mIsNeedToRepeatPrepare:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " mhasprepare:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 244
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->g:Z

    if-nez v1, :cond_0

    .line 245
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e()V

    const-string v1, "startOrPlayVideo() mSurfaceTextureAvailable no init return"

    .line 246
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 249
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "startOrPlayVideo() playVideo"

    .line 250
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    invoke-virtual {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->playVideo()V

    goto :goto_1

    :cond_1
    const-string v1, "startOrPlayVideo() start"

    .line 253
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 2263
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-nez v1, :cond_2

    const-string v1, "start() mVideoFeedsPlayer is null return"

    .line 2264
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 2267
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f()V

    .line 2268
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    const-string v1, "start() startOrPlayVideo need setSurface final"

    .line 2269
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2270
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    iget-object v3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q:Landroid/view/Surface;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->start(Landroid/view/Surface;)V

    .line 2271
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->i:Z

    goto :goto_0

    :cond_3
    const-string v1, "start() startOrPlayVideo final"

    .line 2273
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2274
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->start()V

    .line 2276
    :goto_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    if-nez v1, :cond_4

    iget-boolean v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e:Z

    if-eqz v1, :cond_5

    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_5

    .line 2277
    iput-boolean v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->f:Z

    .line 2278
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->K:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->resume()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 2281
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 257
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-void
.end method

.method public stop()V
    .locals 2

    .line 306
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    if-eqz v0, :cond_0

    .line 307
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->H:Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->stop()V

    .line 309
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->h()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 311
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MediaViewPlayerView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public unregisterView()V
    .locals 1

    .line 1099
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->J:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v0, :cond_0

    .line 1100
    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->removeAllFriendlyObstructions()V

    :cond_0
    return-void
.end method
