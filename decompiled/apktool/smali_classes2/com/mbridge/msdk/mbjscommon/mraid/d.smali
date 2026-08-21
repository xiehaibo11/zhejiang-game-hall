.class public final Lcom/mbridge/msdk/mbjscommon/mraid/d;
.super Ljava/lang/Object;
.source "MraidVolumeChangeReceiver.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbjscommon/mraid/d$a;,
        Lcom/mbridge/msdk/mbjscommon/mraid/d$b;
    }
.end annotation


# static fields
.field public static a:D = -1.0


# instance fields
.field private b:Landroid/content/Context;

.field private c:Landroid/media/AudioManager;

.field private d:Z

.field private e:Lcom/mbridge/msdk/mbjscommon/mraid/d$b;

.field private f:Lcom/mbridge/msdk/mbjscommon/mraid/d$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d:Z

    .line 32
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->b:Landroid/content/Context;

    .line 33
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v0, "audio"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/media/AudioManager;

    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->c:Landroid/media/AudioManager;

    return-void
.end method


# virtual methods
.method public final a()D
    .locals 5

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->c:Landroid/media/AudioManager;

    const/4 v1, 0x3

    const/4 v2, -0x1

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->getStreamMaxVolume(I)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    .line 38
    :goto_0
    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->c:Landroid/media/AudioManager;

    if-eqz v3, :cond_1

    invoke-virtual {v3, v1}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v2

    :cond_1
    int-to-double v1, v2

    const-wide/high16 v3, 0x4059000000000000L    # 100.0

    mul-double/2addr v1, v3

    int-to-double v3, v0

    div-double/2addr v1, v3

    .line 40
    sput-wide v1, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a:D

    return-wide v1
.end method

.method public final a(Lcom/mbridge/msdk/mbjscommon/mraid/d$b;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->e:Lcom/mbridge/msdk/mbjscommon/mraid/d$b;

    return-void
.end method

.method public final b()Lcom/mbridge/msdk/mbjscommon/mraid/d$b;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->e:Lcom/mbridge/msdk/mbjscommon/mraid/d$b;

    return-object v0
.end method

.method public final c()V
    .locals 3

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->b:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 55
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/mraid/d$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbjscommon/mraid/d$a;-><init>(Lcom/mbridge/msdk/mbjscommon/mraid/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->f:Lcom/mbridge/msdk/mbjscommon/mraid/d$a;

    .line 56
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.media.VOLUME_CHANGED_ACTION"

    .line 57
    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 58
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->f:Lcom/mbridge/msdk/mbjscommon/mraid/d$a;

    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/4 v0, 0x1

    .line 59
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d:Z

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 2

    .line 64
    iget-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->b:Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 66
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->f:Lcom/mbridge/msdk/mbjscommon/mraid/d$a;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    const/4 v0, 0x0

    .line 67
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->e:Lcom/mbridge/msdk/mbjscommon/mraid/d$b;

    const/4 v0, 0x0

    .line 68
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbjscommon/mraid/d;->d:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 70
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
