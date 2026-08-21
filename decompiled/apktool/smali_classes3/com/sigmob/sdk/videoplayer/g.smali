.class public Lcom/sigmob/sdk/videoplayer/g;
.super Landroid/widget/RelativeLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/view/View$OnTouchListener;
.implements Landroid/widget/SeekBar$OnSeekBarChangeListener;
.implements Lcom/sigmob/sdk/videoplayer/i;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videoplayer/g$c;,
        Lcom/sigmob/sdk/videoplayer/g$a;,
        Lcom/sigmob/sdk/videoplayer/g$b;
    }
.end annotation


# static fields
.field private static final V:Ljava/lang/String; = "android.media.VOLUME_CHANGED_ACTION"

.field private static final W:Ljava/lang/String; = "android.media.EXTRA_VOLUME_STREAM_TYPE"

.field public static final a:Ljava/lang/String; = "VideoPlayerView"

.field public static final b:I = -0x1

.field public static final c:I = 0x0

.field public static final d:I = 0x1

.field public static final e:I = 0x2

.field public static final f:I = 0x3

.field public static final g:I = 0x4

.field public static final h:I = 0x5

.field public static final i:I = 0x6

.field public static final j:I = 0x7

.field public static final k:I = 0x1

.field public static final l:I = 0x2

.field public static final m:I = 0x3

.field public static final n:I = 0x0

.field public static final o:I = 0x50

.field public static p:Z = true

.field public static q:I = 0x6

.field public static r:I = 0x1

.field public static s:Z = false

.field public static t:Z = true

.field public static u:I


# instance fields
.field public A:I

.field public B:Ljava/lang/Class;

.field public C:Z

.field public D:Lcom/sigmob/sdk/videoplayer/j;

.field public E:I

.field public F:I

.field public G:I

.field public H:J

.field public I:Landroid/widget/ImageView;

.field public J:Landroid/widget/ImageView;

.field public K:Landroid/widget/ImageView;

.field public L:Z

.field protected M:J

.field protected N:Ljava/util/Timer;

.field protected O:I

.field protected P:I

.field protected Q:Landroid/media/AudioManager;

.field protected R:Lcom/sigmob/sdk/videoplayer/g$a;

.field protected S:Z

.field T:Lcom/sigmob/sdk/videoplayer/m;

.field public U:Landroid/media/AudioManager$OnAudioFocusChangeListener;

.field private aa:Landroid/view/ViewGroup;

.field private ab:Landroid/view/ViewGroup;

.field private ac:Landroid/view/ViewGroup;

.field private ad:Landroid/view/ViewGroup;

.field private ae:Landroid/view/ViewGroup;

.field private af:Landroid/view/ViewGroup;

.field private ag:Landroid/view/ViewGroup;

.field private ah:Landroid/view/ViewGroup;

.field private ai:Landroid/widget/ProgressBar;

.field private aj:Landroid/widget/ImageView;

.field private ak:Lcom/sigmob/sdk/nativead/h;

.field private al:Z

.field private am:Lcom/sigmob/sdk/videoplayer/c;

.field private an:Landroid/widget/ImageView;

.field private ao:I

.field private ap:I

.field private aq:Lcom/sigmob/sdk/videoplayer/g$c;

.field private ar:Z

.field private as:Landroid/view/View;

.field private at:Z

.field private au:Landroid/view/View;

.field public v:Lcom/sigmob/sdk/videoplayer/g;

.field public w:I

.field public x:I

.field public y:Lcom/sigmob/sdk/videoplayer/h;

.field public z:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 5

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, -0x1

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/sigmob/sdk/videoplayer/g;->z:I

    iput v1, p0, Lcom/sigmob/sdk/videoplayer/g;->A:I

    const/4 v2, 0x1

    iput-boolean v2, p0, Lcom/sigmob/sdk/videoplayer/g;->C:Z

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->E:I

    iput v1, p0, Lcom/sigmob/sdk/videoplayer/g;->F:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->G:I

    const-wide/16 v3, 0x0

    iput-wide v3, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    iput-boolean v1, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    iput-wide v3, p0, Lcom/sigmob/sdk/videoplayer/g;->M:J

    new-instance v0, Lcom/sigmob/sdk/videoplayer/g$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/g$1;-><init>(Lcom/sigmob/sdk/videoplayer/g;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->U:Landroid/media/AudioManager$OnAudioFocusChangeListener;

    iput-boolean v2, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    iput-boolean v1, p0, Lcom/sigmob/sdk/videoplayer/g;->ar:Z

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 4

    invoke-direct {p0, p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, -0x1

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->z:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->A:I

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/sigmob/sdk/videoplayer/g;->C:Z

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->E:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->F:I

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->G:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    iput-wide v2, p0, Lcom/sigmob/sdk/videoplayer/g;->M:J

    new-instance p2, Lcom/sigmob/sdk/videoplayer/g$1;

    invoke-direct {p2, p0}, Lcom/sigmob/sdk/videoplayer/g$1;-><init>(Lcom/sigmob/sdk/videoplayer/g;)V

    iput-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->U:Landroid/media/AudioManager$OnAudioFocusChangeListener;

    iput-boolean v1, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ar:Z

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/content/Context;)V

    return-void
.end method

.method private F()V
    .locals 5

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->B:Ljava/lang/Class;

    if-nez v0, :cond_1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/k;-><init>(Lcom/sigmob/sdk/videoplayer/i;)V

    :goto_0
    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->B:Ljava/lang/Class;

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Lcom/sigmob/sdk/videoplayer/g;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    aput-object p0, v1, v4

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/videoplayer/j;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method

.method private a(Landroid/view/View;I)V
    .locals 0

    if-eqz p1, :cond_0

    invoke-virtual {p1, p2}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoplayer/g;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    return p0
.end method


# virtual methods
.method public A()V
    .locals 0

    return-void
.end method

.method public B()V
    .locals 0

    return-void
.end method

.method public C()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz v0, :cond_3

    iget v0, v0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    if-eqz v0, :cond_3

    const/4 v1, 0x5

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoResume()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    goto :goto_0

    :cond_1
    const/4 v1, 0x3

    if-ne v0, v1, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoStart()V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    goto :goto_0

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->k()V

    :cond_4
    :goto_0
    return-void
.end method

.method public D()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz v0, :cond_2

    iget v1, v0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v2, 0x6

    if-eq v1, v2, :cond_1

    if-eqz v1, :cond_1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    const/4 v2, 0x7

    if-ne v1, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x5

    if-eq v1, v2, :cond_2

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->g()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->d()V

    goto :goto_1

    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->E()V

    :cond_2
    :goto_1
    return-void
.end method

.method public E()V
    .locals 1

    const-string v0, "releaseAllVideos"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->j()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    :cond_0
    return-void
.end method

.method public a()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->E()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aq:Lcom/sigmob/sdk/videoplayer/g$c;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->aq:Lcom/sigmob/sdk/videoplayer/g$c;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aq:Lcom/sigmob/sdk/videoplayer/g$c;

    :cond_0
    return-void
.end method

.method public a(F)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz p1, :cond_1

    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const/4 v0, 0x5

    if-ne p1, v0, :cond_1

    :cond_0
    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->t()V

    :cond_1
    return-void
.end method

.method public a(FI)V
    .locals 0

    return-void
.end method

.method public a(FLjava/lang/String;JLjava/lang/String;J)V
    .locals 0

    return-void
.end method

.method public a(I)V
    .locals 0

    return-void
.end method

.method public a(II)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onError "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_0

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLAY_VIDEO:Lcom/sigmob/windad/WindAdError;

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/nativead/h;->onVideoError(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    const/16 v0, 0x26

    if-eq p1, v0, :cond_1

    const/16 v1, -0x26

    if-eq p2, v1, :cond_1

    if-eq p1, v1, :cond_1

    if-eq p2, v0, :cond_1

    const/16 p1, -0x13

    if-eq p2, p1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->h()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_1
    return-void
.end method

.method public a(III)V
    .locals 2

    if-eqz p1, :cond_6

    const/4 v0, 0x1

    if-eq p1, v0, :cond_5

    const/4 v0, 0x2

    if-eq p1, v0, :cond_4

    const/4 p2, 0x4

    if-eq p1, p2, :cond_3

    const/4 p2, 0x5

    if-eq p1, p2, :cond_2

    const/4 p2, 0x6

    if-eq p1, p2, :cond_1

    const/4 p2, 0x7

    if-eq p1, p2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->h()V

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->i()V

    goto :goto_0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->g()V

    goto :goto_0

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    goto :goto_0

    :cond_4
    int-to-long v0, p3

    invoke-virtual {p0, p2, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(IJ)V

    goto :goto_0

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->c()V

    goto :goto_0

    :cond_6
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->b()V

    :goto_0
    return-void
.end method

.method public a(IJ)V
    .locals 1

    const/4 v0, 0x2

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iput-wide p2, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    iput p1, p2, Lcom/sigmob/sdk/videoplayer/h;->b:I

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/videoplayer/j;->a(Landroid/view/Surface;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->c()V

    return-void
.end method

.method public a(IJJ)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onProgress: progress="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " position="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " duration="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4, p5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->S:Z

    if-nez v0, :cond_2

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->G:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_1

    if-le v0, p1, :cond_0

    return-void

    :cond_0
    iput v1, p0, Lcom/sigmob/sdk/videoplayer/g;->G:I

    goto :goto_0

    :cond_1
    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ai:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_2

    invoke-virtual {v0, p1}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz p1, :cond_3

    invoke-interface {p1, p2, p3, p4, p5}, Lcom/sigmob/sdk/nativead/h;->a(JJ)V

    :cond_3
    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getLayoutId()I

    move-result v0

    invoke-static {p1, v0, p0}, Landroid/view/View;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_sound_rl"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ae:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_start_rl"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_fullscreen_rl"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_replay_rl"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_sound_btn"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->K:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_start_btn"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->I:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_fullscreen_btn"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->J:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_surface_container"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aa:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_app_container"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ah:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_bottom_progress"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ProgressBar;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ai:Landroid/widget/ProgressBar;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_big_replay"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->af:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_thumb"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aj:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_blurImageView"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->an:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_back_rl"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ag:Landroid/view/ViewGroup;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_layout_top"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->as:Landroid/view/View;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_native_video_layout_bottom"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->au:Landroid/view/View;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ae:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->af:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->O:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->P:I

    new-instance v0, Lcom/sigmob/sdk/videoplayer/g$c;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/g$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/g$2;-><init>(Lcom/sigmob/sdk/videoplayer/g;)V

    invoke-direct {v0, p0, v1}, Lcom/sigmob/sdk/videoplayer/g$c;-><init>(Lcom/sigmob/sdk/videoplayer/g;Lcom/sigmob/sdk/videoplayer/g$b;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aq:Lcom/sigmob/sdk/videoplayer/g$c;

    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.media.VOLUME_CHANGED_ACTION"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->aq:Lcom/sigmob/sdk/videoplayer/g$c;

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/4 p1, -0x1

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    return-void
.end method

.method public a(Landroid/view/ViewGroup;)V
    .locals 5

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v2

    aput-object v2, v1, v4

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->setId(I)V

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/h;->c()Lcom/sigmob/sdk/videoplayer/h;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->B:Ljava/lang/Class;

    invoke-virtual {v0, p1, v4, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;ILjava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/InstantiationException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/InstantiationException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/f;Z)V
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/videoplayer/g$3;->a:[I

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/f;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x0

    const/4 v1, 0x4

    packed-switch p1, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ag:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :pswitch_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->af:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :pswitch_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :pswitch_3
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ae:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :pswitch_4
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :pswitch_5
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    :goto_1
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/h;I)V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;ILjava/lang/Class;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/h;ILjava/lang/Class;)V
    .locals 4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/sigmob/sdk/videoplayer/g;->M:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0xc8

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    return-void

    :cond_0
    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->b()V

    iput-object p3, p0, Lcom/sigmob/sdk/videoplayer/g;->B:Ljava/lang/Class;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/h;J)V
    .locals 1

    const/4 v0, 0x2

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iput-wide p2, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/videoplayer/j;->a(Landroid/view/Surface;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->c()V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;I)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0, p3}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;I)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Class;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0, p3, p4}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;ILjava/lang/Class;)V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    invoke-direct {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0, p3, p4}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;J)V

    return-void
.end method

.method public a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    const/4 v0, 0x4

    :goto_0
    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    return-void
.end method

.method public b()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStateNormal stat"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->aj:Landroid/widget/ImageView;

    invoke-direct {p0, v1, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    invoke-direct {p0, v1, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_0
    return-void
.end method

.method public b(II)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onInfo what - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " extra - "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 p2, 0x3

    if-eq p1, p2, :cond_4

    const/16 p2, 0x2bd

    if-eq p1, p2, :cond_2

    const/16 p2, 0x2be

    if-eq p1, p2, :cond_0

    goto :goto_1

    :cond_0
    iget-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->at:Z

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->at:Z

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    :cond_1
    const-string p1, "MEDIA_INFO_BUFFERING_END"

    goto :goto_0

    :cond_2
    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 p2, 0x4

    if-ne p1, p2, :cond_3

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->at:Z

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->d()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->g()V

    :cond_3
    const-string p1, "MEDIA_INFO_BUFFERING_START"

    :goto_0
    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    if-eq p1, p2, :cond_5

    const/4 p2, 0x2

    if-ne p1, p2, :cond_6

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    :cond_6
    :goto_1
    return-void
.end method

.method public b(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ar:Z

    return-void
.end method

.method public c()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePreparing  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->s()V

    return-void
.end method

.method public c(II)V
    .locals 2

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/g;->ao:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ap:I

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onVideoSizeChanged  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/sigmob/sdk/videoplayer/g;->F:I

    if-eqz v1, :cond_0

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;->setRotation(F)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v0, p1, p2}, Lcom/sigmob/sdk/videoplayer/m;->a(II)V

    :cond_1
    return-void
.end method

.method public d()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->k()V

    return-void
.end method

.method public e()V
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->k()V

    :goto_0
    return-void
.end method

.method public f()V
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePlaying  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aj:Landroid/widget/ImageView;

    const/4 v1, 0x4

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    iget-wide v2, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0, v2, v3}, Lcom/sigmob/sdk/videoplayer/j;->a(J)V

    iput-wide v4, p0, Lcom/sigmob/sdk/videoplayer/g;->H:J

    :cond_0
    iput v1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->q()V

    return-void
.end method

.method public g()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStatePause  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    const/4 v0, 0x5

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoPause()V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->q()V

    return-void
.end method

.method public getAppContainer()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ah:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public getApplicationContext()Landroid/content/Context;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    return-object v1

    :cond_0
    return-object v0
.end method

.method public getBlurImageView()Landroid/widget/ImageView;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->an:Landroid/widget/ImageView;

    return-object v0
.end method

.method public getBottomLayoutView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->au:Landroid/view/View;

    return-object v0
.end method

.method public getCurrentPositionWhenPlaying()J
    .locals 4

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const-wide/16 v1, 0x0

    const/4 v3, 0x4

    if-eq v0, v3, :cond_0

    const/4 v3, 0x5

    if-ne v0, v3, :cond_1

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->g()J

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-wide v1

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->printStackTrace()V

    return-wide v1
.end method

.method public getDuration()J
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->j()J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/IllegalStateException;->printStackTrace()V

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getLayoutId()I
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_video_player_layout"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getLayoutId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public getSigAdView()Landroid/view/ViewGroup;
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    :cond_0
    instance-of v1, v0, Lcom/sigmob/sdk/nativead/i;

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-nez v0, :cond_0

    :goto_0
    return-object v0
.end method

.method public getTextureBitmap()Landroid/graphics/Bitmap;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/m;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getThumbView()Landroid/widget/ImageView;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aj:Landroid/widget/ImageView;

    return-object v0
.end method

.method public getTopLayoutView()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->as:Landroid/view/View;

    return-object v0
.end method

.method public getVideoHeight()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ao:I

    return v0
.end method

.method public getVideoPlayerDataSource()Lcom/sigmob/sdk/videoplayer/h;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    return-object v0
.end method

.method public getVideoSurferViewHeight()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/m;->getHeight()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public getVideoWidth()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ap:I

    return v0
.end method

.method public h()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStateError  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x7

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    :goto_0
    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    return-void
.end method

.method public i()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onStateAutoComplete  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    const/4 v0, 0x6

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ai:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_0
    return-void
.end method

.method public j()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reset  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->s()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->B()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->z()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->A()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->b()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aa:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->f()V

    :cond_1
    return-void
.end method

.method public k()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startVideo ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/videoplayer/g;->setCurrentVideoAdView(Lcom/sigmob/sdk/videoplayer/g;)V

    :try_start_0
    invoke-direct {p0}, Lcom/sigmob/sdk/videoplayer/g;->F()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    const/4 v1, 0x4

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->af:Landroid/view/ViewGroup;

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/view/View;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_0

    const/high16 v1, 0x1000000

    invoke-virtual {v0, v1, v1}, Landroid/view/Window;->setFlags(II)V

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->l()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->c()V

    return-void
.end method

.method public l()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "addTextureView ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->aa:Landroid/view/ViewGroup;

    invoke-virtual {v1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoplayer/m;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v1, 0x11

    const/4 v2, -0x1

    invoke-direct {v0, v2, v2, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(III)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->aa:Landroid/view/ViewGroup;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v1, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public m()V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_0

    const v1, 0x1020002

    invoke-virtual {v0, v1}, Landroid/view/Window;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method public n()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPrepared  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x3

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->setSoundChange(Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoLoad()V

    :cond_0
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoStart()V

    :cond_1
    const-string v0, "mediaInterface start"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->L:Z

    goto :goto_0

    :cond_2
    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ar:Z

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->aj:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/m;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mp3"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "wma"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "aac"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "m4a"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "wav"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    :cond_4
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    :cond_5
    return-void
.end method

.method public o()V
    .locals 2

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->gc()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/h;->onVideoCompleted()V

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onAutoCompletion  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->B()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->z()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->A()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->i()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object v0

    if-eqz v0, :cond_1

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->s()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/sigmob/sdk/videoplayer/g;->onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z

    return-void
.end method

.method protected onMeasure(II)V
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    goto :goto_1

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->z:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->A:I

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result p1

    int-to-float p2, p1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->A:I

    int-to-float v0, v0

    mul-float/2addr p2, v0

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->z:I

    int-to-float v0, v0

    div-float/2addr p2, v0

    float-to-int p2, p2

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/videoplayer/g;->setMeasuredDimension(II)V

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {p1, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p1

    invoke-static {p2, v0}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result p2

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videoplayer/g;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Landroid/view/View;->measure(II)V

    goto :goto_0

    :cond_1
    invoke-super {p0, p1, p2}, Landroid/widget/RelativeLayout;->onMeasure(II)V

    :goto_0
    return-void

    :cond_2
    :goto_1
    invoke-super {p0, p1, p2}, Landroid/widget/RelativeLayout;->onMeasure(II)V

    return-void
.end method

.method public onProgressChanged(Landroid/widget/SeekBar;IZ)V
    .locals 0

    if-eqz p3, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getDuration()J

    :cond_0
    return-void
.end method

.method public onStartTrackingTouch(Landroid/widget/SeekBar;)V
    .locals 1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "bottomProgress onStartTrackingTouch ["

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "] "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    :goto_0
    if-eqz p1, :cond_0

    const/4 v0, 0x1

    invoke-interface {p1, v0}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    invoke-interface {p1}, Landroid/view/ViewParent;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public onStopTrackingTouch(Landroid/widget/SeekBar;)V
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bottomProgress onStopTrackingTouch ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->q()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_0

    const/4 v2, 0x0

    invoke-interface {v0, v2}, Landroid/view/ViewParent;->requestDisallowInterceptTouchEvent(Z)V

    invoke-interface {v0}, Landroid/view/ViewParent;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    goto :goto_0

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    const/4 v2, 0x4

    if-eq v0, v2, :cond_1

    const/4 v2, 0x5

    if-eq v0, v2, :cond_1

    return-void

    :cond_1
    invoke-virtual {p1}, Landroid/widget/SeekBar;->getProgress()I

    move-result v0

    int-to-long v2, v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getDuration()J

    move-result-wide v4

    mul-long/2addr v2, v4

    const-wide/16 v4, 0x64

    div-long/2addr v2, v4

    invoke-virtual {p1}, Landroid/widget/SeekBar;->getProgress()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/g;->G:I

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1, v2, v3}, Lcom/sigmob/sdk/videoplayer/j;->a(J)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "seekTo "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " ["

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 1

    const/4 v0, 0x1

    if-eqz p2, :cond_0

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p2

    if-ne p2, v0, :cond_f

    :cond_0
    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->ac:Landroid/view/ViewGroup;

    if-ne p1, p2, :cond_3

    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    if-eqz p1, :cond_2

    if-eq p1, v0, :cond_1

    goto/16 :goto_3

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->u()V

    goto/16 :goto_3

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->t()V

    goto/16 :goto_3

    :cond_3
    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->ae:Landroid/view/ViewGroup;

    if-ne p1, p2, :cond_4

    iget-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    xor-int/2addr p1, v0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videoplayer/g;->setSoundChange(Z)V

    goto/16 :goto_3

    :cond_4
    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->ad:Landroid/view/ViewGroup;

    if-eq p1, p2, :cond_d

    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->af:Landroid/view/ViewGroup;

    if-ne p1, p2, :cond_5

    goto/16 :goto_2

    :cond_5
    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/g;->ab:Landroid/view/ViewGroup;

    if-ne p1, p2, :cond_f

    iget p1, p0, Lcom/sigmob/sdk/videoplayer/g;->w:I

    if-nez p1, :cond_7

    sget-boolean p1, Lcom/sigmob/sdk/videoplayer/g;->t:Z

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "file"

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->y:Lcom/sigmob/sdk/videoplayer/h;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "/"

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_6

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/videoplayer/d;->a(Landroid/content/Context;)Z

    move-result p1

    if-nez p1, :cond_6

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->y()V

    return v0

    :cond_6
    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->k()V

    goto :goto_1

    :cond_7
    const/4 p2, 0x4

    if-ne p1, p2, :cond_8

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "pauseVideo ["

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "] "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->d()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->g()V

    goto :goto_1

    :cond_8
    const/4 p2, 0x5

    if-ne p1, p2, :cond_a

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz p1, :cond_9

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/h;->onVideoResume()V

    :cond_9
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    goto :goto_1

    :cond_a
    const/4 p2, 0x6

    if-ne p1, p2, :cond_b

    goto :goto_0

    :cond_b
    const/4 p2, 0x3

    if-ne p1, p2, :cond_c

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/j;->a()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->f()V

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz p1, :cond_c

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/h;->onVideoStart()V

    :cond_c
    :goto_1
    return v0

    :cond_d
    :goto_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    if-eqz p1, :cond_e

    invoke-interface {p1}, Lcom/sigmob/sdk/nativead/h;->a()V

    :cond_e
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->k()V

    :cond_f
    :goto_3
    const/4 p1, 0x0

    return p1
.end method

.method public p()V
    .locals 0

    return-void
.end method

.method public q()V
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startProgressTimer:  ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "] "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->r()V

    new-instance v0, Ljava/util/Timer;

    invoke-direct {v0}, Ljava/util/Timer;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->N:Ljava/util/Timer;

    new-instance v2, Lcom/sigmob/sdk/videoplayer/g$a;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/videoplayer/g$a;-><init>(Lcom/sigmob/sdk/videoplayer/g;)V

    iput-object v2, p0, Lcom/sigmob/sdk/videoplayer/g;->R:Lcom/sigmob/sdk/videoplayer/g$a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g;->N:Ljava/util/Timer;

    const-wide/16 v3, 0x0

    const-wide/16 v5, 0x12c

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    return-void
.end method

.method public r()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->N:Ljava/util/Timer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->R:Lcom/sigmob/sdk/videoplayer/g$a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g$a;->cancel()Z

    :cond_1
    return-void
.end method

.method public s()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ai:Landroid/widget/ProgressBar;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ProgressBar;->setProgress(I)V

    :cond_0
    return-void
.end method

.method public setBackClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->ag:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public setBufferProgress(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setBufferProgress() called with: bufferProgress = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public setCurrentVideoAdView(Lcom/sigmob/sdk/videoplayer/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    return-void
.end method

.method public setHolderImageResource(I)V
    .locals 0

    return-void
.end method

.method public setMediaInterface(Ljava/lang/Class;)V
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->j()V

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->B:Ljava/lang/Class;

    return-void
.end method

.method public setRotation(F)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoplayer/m;->setRotation(F)V

    return-void
.end method

.method public setScreen(I)V
    .locals 1

    if-eqz p1, :cond_2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->x()V

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->w()V

    goto :goto_0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->v()V

    :goto_0
    return-void
.end method

.method public setSoundChange(Z)V
    .locals 2

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/g;->al:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/j;->a(F)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->K:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_image_video_mute"

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->D:Lcom/sigmob/sdk/videoplayer/j;

    if-eqz p1, :cond_2

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videoplayer/j;->a(F)V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->K:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_image_video_unmute"

    :goto_0
    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method

.method public setState(I)V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0, v0}, Lcom/sigmob/sdk/videoplayer/g;->a(III)V

    return-void
.end method

.method public setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoplayer/m;->setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V

    :cond_0
    return-void
.end method

.method public setTextureViewRotation(I)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz v0, :cond_0

    int-to-float p1, p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videoplayer/m;->setRotation(F)V

    :cond_0
    return-void
.end method

.method public setUp(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/videoplayer/h;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/videoplayer/h;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    invoke-virtual {p0, v0, p1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/h;I)V

    return-void
.end method

.method public setVideoAdStatusListener(Lcom/sigmob/sdk/nativead/h;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->ak:Lcom/sigmob/sdk/nativead/h;

    return-void
.end method

.method public setVideoAdViewListener(Lcom/sigmob/sdk/videoplayer/c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->am:Lcom/sigmob/sdk/videoplayer/c;

    return-void
.end method

.method public setVideoImageDisplayType(I)V
    .locals 0

    sput p1, Lcom/sigmob/sdk/videoplayer/g;->u:I

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g;->v:Lcom/sigmob/sdk/videoplayer/g;

    if-eqz p1, :cond_0

    iget-object p1, p1, Lcom/sigmob/sdk/videoplayer/g;->T:Lcom/sigmob/sdk/videoplayer/m;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/m;->requestLayout()V

    :cond_0
    return-void
.end method

.method public t()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->am:Lcom/sigmob/sdk/videoplayer/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/videoplayer/c;->g()V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->w()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->J:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "sig_image_video_small"

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method

.method public u()V
    .locals 3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/videoplayer/g;->M:J

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->am:Lcom/sigmob/sdk/videoplayer/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/videoplayer/c;->f()V

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->v()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g;->J:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "sig_image_video_fullscreen"

    invoke-static {v1, v2}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method

.method public v()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    return-void
.end method

.method public w()V
    .locals 1

    const/4 v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    return-void
.end method

.method public x()V
    .locals 1

    const/4 v0, 0x2

    iput v0, p0, Lcom/sigmob/sdk/videoplayer/g;->x:I

    return-void
.end method

.method public y()V
    .locals 0

    return-void
.end method

.method public z()V
    .locals 0

    return-void
.end method
