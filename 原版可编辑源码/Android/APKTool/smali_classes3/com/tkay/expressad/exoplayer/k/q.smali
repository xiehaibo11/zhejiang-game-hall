.class public final Lcom/tkay/expressad/exoplayer/k/q;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/q$a;
    }
.end annotation


# static fields
.field public static final a:I = -0x3e8

.field public static final b:I = 0x0

.field public static final c:I = 0x1

.field public static final d:I = 0x2

.field public static final e:I = 0x3

.field public static final f:I = 0x4


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 109
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;ILandroid/app/Notification;)V
    .locals 1

    const-string v0, "notification"

    .line 101
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/NotificationManager;

    if-eqz p2, :cond_0

    .line 103
    invoke-virtual {p0, p1, p2}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    return-void

    .line 105
    :cond_0
    invoke-virtual {p0, p1}, Landroid/app/NotificationManager;->cancel(I)V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;II)V
    .locals 2

    .line 79
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_0

    const-string v0, "notification"

    .line 81
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 82
    new-instance v1, Landroid/app/NotificationChannel;

    .line 83
    invoke-virtual {p0, p2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p1, p0, p3}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 84
    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    :cond_0
    return-void
.end method
