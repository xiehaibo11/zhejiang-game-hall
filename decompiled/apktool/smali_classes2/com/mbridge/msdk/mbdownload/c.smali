.class public Lcom/mbridge/msdk/mbdownload/c;
.super Ljava/lang/Object;
.source "DownloadProvider.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbdownload/c$a;,
        Lcom/mbridge/msdk/mbdownload/c$b;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;

.field public static b:Z

.field protected static c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/mbridge/msdk/mbdownload/b$a;",
            "Landroid/os/Messenger;",
            ">;"
        }
    .end annotation
.end field

.field protected static d:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Lcom/mbridge/msdk/mbdownload/e$b;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field final e:Landroid/os/Messenger;

.field f:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private g:Landroid/support/v4/app/NotificationManagerCompat;

.field private h:Lcom/mbridge/msdk/mbdownload/e;

.field private i:Lcom/mbridge/msdk/mbdownload/i;

.field private j:Landroid/os/Handler;

.field private k:Z

.field private l:Landroid/app/Service;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 102
    const-class v0, Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 103
    sput-boolean v0, Lcom/mbridge/msdk/mbdownload/c;->b:Z

    .line 149
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    .line 152
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 101
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 154
    new-instance v0, Landroid/os/Messenger;

    new-instance v1, Lcom/mbridge/msdk/mbdownload/c$b;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbdownload/c$b;-><init>(Lcom/mbridge/msdk/mbdownload/c;)V

    invoke-direct {v0, v1}, Landroid/os/Messenger;-><init>(Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->e:Landroid/os/Messenger;

    const/4 v0, 0x1

    .line 158
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/c;->k:Z

    .line 278
    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->f:Landroid/util/SparseArray;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;
    .locals 0

    .line 101
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;)V
    .locals 5

    .line 2254
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "startDownload([mComponentName:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " mTitle:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " mUrl:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "])"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2259
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    .line 2314
    iget-object v0, p1, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    shr-int/lit8 v0, v0, 0x2

    iget-object v1, p1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    .line 2315
    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    shr-int/lit8 v1, v1, 0x3

    add-int/2addr v0, v1

    int-to-long v0, v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    add-long/2addr v0, v2

    long-to-int v0, v0

    .line 2316
    invoke-static {v0}, Ljava/lang/Math;->abs(I)I

    move-result v0

    .line 2260
    new-instance v1, Lcom/mbridge/msdk/mbdownload/k;

    const/4 v2, 0x0

    invoke-direct {v1, p0, p1, v0, v2}, Lcom/mbridge/msdk/mbdownload/k;-><init>(Lcom/mbridge/msdk/mbdownload/c;Lcom/mbridge/msdk/mbdownload/b$a;II)V

    .line 2262
    new-instance v3, Lcom/mbridge/msdk/mbdownload/e$b;

    invoke-direct {v3, p1, v0}, Lcom/mbridge/msdk/mbdownload/e$b;-><init>(Lcom/mbridge/msdk/mbdownload/b$a;I)V

    .line 2263
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/c;->i:Lcom/mbridge/msdk/mbdownload/i;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/mbdownload/i;->a(I)V

    .line 2264
    sget-object p0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    .line 3120
    iget p1, v3, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    invoke-virtual {p0, p1, v3}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 2265
    iput-object v1, v3, Lcom/mbridge/msdk/mbdownload/e$b;->a:Lcom/mbridge/msdk/mbdownload/k;

    .line 2267
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/k;->start()V

    .line 3705
    sget-boolean p0, Lcom/mbridge/msdk/mbdownload/c;->b:Z

    if-eqz p0, :cond_1

    .line 3706
    sget-object p0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result p0

    .line 3707
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p1}, Landroid/util/SparseArray;->size()I

    move-result p1

    .line 3708
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Client size ="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, "   cacheSize = "

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-ne p0, p1, :cond_0

    goto :goto_0

    .line 3710
    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 2270
    :cond_1
    :goto_0
    sget-boolean p0, Lcom/mbridge/msdk/mbdownload/c;->b:Z

    if-eqz p0, :cond_2

    .line 2271
    :goto_1
    sget-object p0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p0}, Landroid/util/SparseArray;->size()I

    move-result p0

    if-ge v2, p0, :cond_2

    .line 2272
    sget-object p0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p0, v2}, Landroid/util/SparseArray;->valueAt(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 2273
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Running task "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    return-void
.end method

.method private a(Lcom/mbridge/msdk/mbdownload/e$b;I)V
    .locals 4

    .line 500
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    iget-object v2, p1, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, p2, v3}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/b$a;II)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p2

    .line 501
    iput-object p2, p1, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;
    .locals 0

    .line 101
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;
    .locals 0

    .line 101
    iget-object p0, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    return-object p0
.end method

.method private d()V
    .locals 3

    .line 247
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->i:Lcom/mbridge/msdk/mbdownload/i;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/i;->a()Ljava/util/List;

    move-result-object v0

    .line 248
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 249
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v2, v1}, Landroid/support/v4/app/NotificationManagerCompat;->cancel(I)V

    goto :goto_0

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Intent;II)I
    .locals 5

    if-eqz p1, :cond_0

    .line 174
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 175
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    invoke-virtual {p2, p0, p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/c;Landroid/content/Intent;)Z

    .line 179
    :cond_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p2, 0x13

    const/4 p3, 0x1

    if-lt p1, p2, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c;->i:Lcom/mbridge/msdk/mbdownload/i;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/i;->b()Z

    move-result p1

    if-nez p1, :cond_1

    iget-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/c;->k:Z

    if-eqz p1, :cond_2

    .line 190
    :cond_1
    :try_start_0
    new-instance p1, Landroid/content/Intent;

    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {p2}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-direct {p1, p2, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 191
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {p2}, Landroid/app/Service;->getPackageName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 192
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 193
    invoke-virtual {p2}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    const/high16 v0, 0x40000000    # 2.0f

    invoke-static {p2, p3, p1, v0}, Landroid/app/PendingIntent;->getService(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    .line 196
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {p2}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    const-string v0, "alarm"

    .line 197
    invoke-virtual {p2, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/app/AlarmManager;

    const/4 v0, 0x3

    .line 199
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    const-wide/16 v3, 0x1388

    add-long/2addr v1, v3

    .line 198
    invoke-virtual {p2, v0, v1, v2, p1}, Landroid/app/AlarmManager;->set(IJLandroid/app/PendingIntent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 206
    :catch_0
    :cond_2
    iget-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/c;->k:Z

    if-eqz p1, :cond_3

    .line 207
    invoke-direct {p0}, Lcom/mbridge/msdk/mbdownload/c;->d()V

    const/4 p1, 0x0

    .line 208
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/c;->k:Z

    :cond_3
    return p3
.end method

.method public final a(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 1

    .line 168
    sget-object p1, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const-string v0, "onBind "

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c;->e:Landroid/os/Messenger;

    invoke-virtual {p1}, Landroid/os/Messenger;->getBinder()Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public final a()V
    .locals 4

    .line 217
    sget-boolean v0, Lcom/mbridge/msdk/mbdownload/c;->b:Z

    if-eqz v0, :cond_0

    .line 218
    invoke-static {}, Landroid/os/Debug;->waitForDebugger()V

    .line 221
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {v0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/support/v4/app/NotificationManagerCompat;->from(Landroid/content/Context;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    .line 222
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/j;->a()V

    .line 223
    new-instance v0, Lcom/mbridge/msdk/mbdownload/i;

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/mbdownload/i;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->i:Lcom/mbridge/msdk/mbdownload/i;

    .line 224
    new-instance v0, Lcom/mbridge/msdk/mbdownload/e;

    sget-object v1, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/c;->i:Lcom/mbridge/msdk/mbdownload/i;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbdownload/e;-><init>(Landroid/util/SparseArray;Ljava/util/Map;Lcom/mbridge/msdk/mbdownload/i;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    .line 226
    new-instance v0, Lcom/mbridge/msdk/mbdownload/c$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbdownload/c$a;-><init>(Lcom/mbridge/msdk/mbdownload/c;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->j:Landroid/os/Handler;

    return-void
.end method

.method public final a(I)V
    .locals 8

    .line 283
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result v0

    if-ltz v0, :cond_3

    .line 284
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 285
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    const/4 v3, 0x1

    .line 287
    aget-wide v4, v1, v3

    const-wide/16 v6, 0x0

    cmp-long v4, v4, v6

    if-lez v4, :cond_0

    .line 288
    aget-wide v4, v1, v2

    long-to-float v2, v4

    aget-wide v3, v1, v3

    long-to-float v1, v3

    div-float/2addr v2, v1

    const/high16 v1, 0x42c80000    # 100.0f

    mul-float/2addr v2, v1

    float-to-int v2, v2

    const/16 v1, 0x64

    if-le v2, v1, :cond_0

    const/16 v2, 0x63

    .line 295
    :cond_0
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    if-nez v1, :cond_3

    .line 296
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->f:Landroid/util/SparseArray;

    const-wide/16 v3, -0x1

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, p1, v3}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 297
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    iget-object v4, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-virtual {v1, v3, v4, p1, v2}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/mbdownload/b$a;II)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v1

    .line 298
    iput-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 299
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object v0

    .line 301
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v1, p1, v0}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 303
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 306
    :goto_0
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {p1}, Landroid/support/v4/app/NotificationManagerCompat;->areNotificationsEnabled()Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "true"

    goto :goto_1

    :cond_1
    const-string p1, "false"

    :goto_1
    const-string v0, ""

    .line 309
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    const-string v2, "notification"

    invoke-virtual {v1, v2}, Landroid/app/Service;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    .line 310
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    if-lt v2, v3, :cond_2

    const-string v2, "download"

    invoke-virtual {v1, v2}, Landroid/app/NotificationManager;->getNotificationChannel(Ljava/lang/String;)Landroid/app/NotificationChannel;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 311
    invoke-virtual {v1}, Landroid/app/NotificationChannel;->getImportance()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 313
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v1}, Landroid/support/v4/app/NotificationManagerCompat;->getImportance()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    .line 1724
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 314
    invoke-static {v2, p1, v1, v0}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 316
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_2
    return-void
.end method

.method public final a(II)V
    .locals 8

    .line 324
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result v0

    if-ltz v0, :cond_2

    .line 325
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 326
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    .line 327
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 329
    iget-boolean v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->f:Landroid/util/SparseArray;

    invoke-virtual {v1, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    sub-long v4, v2, v4

    const-wide/16 v6, 0x1f4

    cmp-long v1, v4, v6

    if-lez v1, :cond_2

    .line 330
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->f:Landroid/util/SparseArray;

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v1, p1, v2}, Landroid/util/SparseArray;->put(ILjava/lang/Object;)V

    .line 331
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    const/4 v2, 0x0

    const/16 v3, 0x64

    .line 332
    invoke-virtual {v1, v3, p2, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    .line 333
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "%"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    .line 334
    iget-object v4, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean v4, v4, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    if-eqz v4, :cond_0

    .line 335
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/e$a;->a()Lcom/mbridge/msdk/mbdownload/e$a;

    .line 337
    :cond_0
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object v1

    .line 339
    :try_start_0
    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v4, p1, v1}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 341
    :catch_0
    invoke-direct {p0, v0, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/e$b;I)V

    .line 342
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 343
    invoke-virtual {v1, v3, p2, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 344
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    .line 345
    iget-object p2, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean p2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->i:Z

    if-eqz p2, :cond_1

    .line 346
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/e$a;->a()Lcom/mbridge/msdk/mbdownload/e$a;

    .line 348
    :cond_1
    invoke-virtual {v1}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object p2

    .line 350
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 352
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final a(ILjava/lang/Exception;)V
    .locals 1

    .line 494
    sget-object p2, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p2, p1}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result p2

    if-ltz p2, :cond_0

    .line 495
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 5

    .line 426
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->indexOfKey(I)I

    move-result v0

    if-ltz v0, :cond_1

    .line 427
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {v0, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbdownload/e$b;

    if-eqz v0, :cond_1

    .line 429
    iget-object v1, v0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    .line 431
    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    const/4 v2, 0x0

    const/16 v3, 0x64

    .line 432
    invoke-virtual {v0, v3, v3, v2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    iget-object v4, v1, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 433
    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 434
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 435
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->b()Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v2

    iget-boolean v4, v1, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    move-result-object v2

    const v4, 0x1080082

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbdownload/h;->a(I)Lcom/mbridge/msdk/mbdownload/h;

    .line 436
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object v0

    .line 438
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v2, p1, v0}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 440
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 443
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/d;->a(Landroid/content/Context;)Lcom/mbridge/msdk/mbdownload/d;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    iget-object v4, v1, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v2, v4, v3}, Lcom/mbridge/msdk/mbdownload/d;->a(Ljava/lang/String;Ljava/lang/String;I)V

    .line 447
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v2, "filename"

    .line 448
    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 452
    iget-object p2, v1, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    const-string v2, "delta_update"

    .line 453
    invoke-virtual {p2, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p2

    const/4 v2, 0x1

    if-eqz p2, :cond_0

    .line 454
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v3, 0x6

    .line 455
    iput v3, p2, Landroid/os/Message;->what:I

    .line 456
    iput v2, p2, Landroid/os/Message;->arg1:I

    .line 457
    iput-object v1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 458
    iput p1, p2, Landroid/os/Message;->arg2:I

    .line 459
    invoke-virtual {p2, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 460
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/c;->j:Landroid/os/Handler;

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void

    .line 463
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v3, 0x5

    .line 464
    iput v3, p2, Landroid/os/Message;->what:I

    .line 465
    iput v2, p2, Landroid/os/Message;->arg1:I

    .line 466
    iput-object v1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 467
    iput p1, p2, Landroid/os/Message;->arg2:I

    .line 468
    invoke-virtual {p2, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 469
    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->j:Landroid/os/Handler;

    invoke-virtual {v4, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 473
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    .line 474
    iput v3, p2, Landroid/os/Message;->what:I

    .line 475
    iput v2, p2, Landroid/os/Message;->arg1:I

    .line 476
    iput p1, p2, Landroid/os/Message;->arg2:I

    .line 477
    invoke-virtual {p2, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 480
    :try_start_1
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 481
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->c:Ljava/util/Map;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Messenger;

    invoke-virtual {v0, p2}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 485
    :catch_1
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/c;->h:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {p2, v0, p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    :cond_1
    :goto_1
    return-void
.end method

.method public final a(Landroid/app/Service;)V
    .locals 0

    .line 720
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    return-void
.end method

.method public final b()V
    .locals 2

    const v0, 0x3f480

    .line 235
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {v1}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/d;->a(Landroid/content/Context;)Lcom/mbridge/msdk/mbdownload/d;

    move-result-object v1

    .line 236
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbdownload/d;->a(I)V

    .line 237
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    invoke-virtual {v0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/d;->a(Landroid/content/Context;)Lcom/mbridge/msdk/mbdownload/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/d;->finalize()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 239
    sget-object v1, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final b(II)V
    .locals 5

    const/4 v0, 0x0

    const/16 v1, 0x64

    const/4 v2, 0x1

    if-ne p2, v2, :cond_0

    .line 368
    sget-object p2, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p2, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 369
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 370
    invoke-virtual {v2, v1, v1, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v4, v4, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 371
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 372
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 373
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    .line 374
    invoke-virtual {v3}, Lcom/mbridge/msdk/mbdownload/e$a;->b()Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean v4, v4, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    .line 375
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object v2

    .line 377
    :try_start_0
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v3, p1, v2}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    .line 379
    :catch_0
    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/e$b;I)V

    .line 380
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 381
    invoke-virtual {v2, v1, v1, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v0

    iget-object v1, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 382
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 383
    invoke-virtual {v1}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/g;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/e$a;->b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 384
    invoke-virtual {v1}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/g;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v0

    .line 385
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/e$a;->b()Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v0

    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-boolean p2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->h:Z

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    .line 386
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object p2

    .line 388
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto/16 :goto_0

    :catch_1
    move-exception p1

    .line 390
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto/16 :goto_0

    :cond_0
    const/16 v2, 0x9

    if-ne p2, v2, :cond_1

    .line 395
    sget-object p2, Lcom/mbridge/msdk/mbdownload/c;->d:Landroid/util/SparseArray;

    invoke-virtual {p2, p1}, Landroid/util/SparseArray;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/mbdownload/e$b;

    .line 396
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 397
    invoke-virtual {v2, v1, v1, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object v4, v4, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 398
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 399
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 400
    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    .line 401
    invoke-virtual {v3}, Lcom/mbridge/msdk/mbdownload/e$a;->b()Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    .line 402
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object v2

    .line 404
    :try_start_2
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v3, p1, v2}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_0

    .line 406
    :catch_2
    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/e$b;I)V

    .line 407
    iget-object v2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->b:Lcom/mbridge/msdk/mbdownload/e$a;

    .line 408
    invoke-virtual {v2, v1, v1, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(IIZ)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object v1

    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/b$a;->j:Ljava/lang/String;

    .line 409
    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 410
    invoke-virtual {v1}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/g;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/mbdownload/e$a;->b(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p2

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    .line 411
    invoke-virtual {v1}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/g;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/CharSequence;)Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p2

    .line 412
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/e$a;->b()Lcom/mbridge/msdk/mbdownload/e$a;

    move-result-object p2

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbdownload/e$a;->a(Z)Lcom/mbridge/msdk/mbdownload/h;

    .line 413
    invoke-virtual {v2}, Lcom/mbridge/msdk/mbdownload/e$a;->d()Landroid/app/Notification;

    move-result-object p2

    .line 415
    :try_start_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->g:Landroid/support/v4/app/NotificationManagerCompat;

    invoke-virtual {v0, p1, p2}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_0

    :catch_3
    move-exception p1

    .line 417
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final c()Landroid/app/Service;
    .locals 1

    .line 724
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/c;->l:Landroid/app/Service;

    return-object v0
.end method
