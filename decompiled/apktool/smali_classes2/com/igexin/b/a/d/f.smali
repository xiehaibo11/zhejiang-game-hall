.class public Lcom/igexin/b/a/d/f;
.super Landroid/content/BroadcastReceiver;

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/content/BroadcastReceiver;",
        "Ljava/util/Comparator<",
        "Lcom/igexin/b/a/d/e;",
        ">;"
    }
.end annotation


# static fields
.field public static final g:Ljava/lang/String;

.field public static final u:J


# instance fields
.field private a:Z

.field final h:Lcom/igexin/b/a/d/j;

.field final i:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Long;",
            "Lcom/igexin/b/a/d/a/b;",
            ">;"
        }
    .end annotation
.end field

.field final j:Lcom/igexin/b/a/d/c;

.field final k:Lcom/igexin/b/a/d/d;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/igexin/b/a/d/d<",
            "Lcom/igexin/b/a/d/e;",
            ">;"
        }
    .end annotation
.end field

.field final l:Ljava/util/concurrent/locks/ReentrantLock;

.field m:Landroid/os/PowerManager;

.field n:Landroid/app/AlarmManager;

.field o:Landroid/content/Intent;

.field p:Landroid/app/PendingIntent;

.field q:Landroid/content/Intent;

.field r:Landroid/app/PendingIntent;

.field s:Ljava/lang/String;

.field volatile t:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-class v0, Lcom/igexin/b/a/d/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/b/a/d/f;->g:Ljava/lang/String;

    sget-object v0, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v1, 0x2

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/TimeUnit;->toMillis(J)J

    move-result-wide v0

    sput-wide v0, Lcom/igexin/b/a/d/f;->u:J

    return-void
.end method

.method protected constructor <init>()V
    .locals 2

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    new-instance v0, Ljava/util/concurrent/locks/ReentrantLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantLock;-><init>()V

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->l:Ljava/util/concurrent/locks/ReentrantLock;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/b/a/d/f;->a:Z

    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x7

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    new-instance v0, Lcom/igexin/b/a/d/d;

    invoke-direct {v0, p0, p0}, Lcom/igexin/b/a/d/d;-><init>(Ljava/util/Comparator;Lcom/igexin/b/a/d/f;)V

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    new-instance v0, Lcom/igexin/b/a/d/c;

    invoke-direct {v0}, Lcom/igexin/b/a/d/c;-><init>()V

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    new-instance v0, Lcom/igexin/b/a/d/j;

    invoke-direct {v0, p0}, Lcom/igexin/b/a/d/j;-><init>(Lcom/igexin/b/a/d/f;)V

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->h:Lcom/igexin/b/a/d/j;

    sput-object p0, Lcom/igexin/b/a/d/e;->E:Lcom/igexin/b/a/d/f;

    return-void
.end method


# virtual methods
.method public final a(Lcom/igexin/b/a/d/e;Lcom/igexin/b/a/d/e;)I
    .locals 6

    iget-wide v0, p1, Lcom/igexin/b/a/d/e;->u:J

    iget-wide v2, p2, Lcom/igexin/b/a/d/e;->u:J

    cmp-long v0, v0, v2

    const/4 v1, -0x1

    if-gez v0, :cond_0

    return v1

    :cond_0
    iget-wide v2, p1, Lcom/igexin/b/a/d/e;->u:J

    iget-wide v4, p2, Lcom/igexin/b/a/d/e;->u:J

    cmp-long v0, v2, v4

    const/4 v2, 0x1

    if-lez v0, :cond_1

    return v2

    :cond_1
    iget v0, p1, Lcom/igexin/b/a/d/e;->A:I

    iget v3, p2, Lcom/igexin/b/a/d/e;->A:I

    if-le v0, v3, :cond_2

    return v1

    :cond_2
    iget v0, p1, Lcom/igexin/b/a/d/e;->A:I

    iget v3, p2, Lcom/igexin/b/a/d/e;->A:I

    if-ge v0, v3, :cond_3

    return v2

    :cond_3
    iget v0, p1, Lcom/igexin/b/a/d/e;->v:I

    iget v3, p2, Lcom/igexin/b/a/d/e;->v:I

    if-ge v0, v3, :cond_4

    return v1

    :cond_4
    iget v0, p1, Lcom/igexin/b/a/d/e;->v:I

    iget v1, p2, Lcom/igexin/b/a/d/e;->v:I

    if-le v0, v1, :cond_5

    return v2

    :cond_5
    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    invoke-virtual {p2}, Ljava/lang/Object;->hashCode()I

    move-result p2

    sub-int/2addr p1, p2

    return p1
.end method

.method public final a(J)V
    .locals 4

    iget-boolean v0, p0, Lcom/igexin/b/a/d/f;->t:Z

    if-eqz v0, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setalarm|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v2

    const-string v3, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v1, v3, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2, p1, p2}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-wide/16 v2, 0x0

    cmp-long v0, p1, v2

    if-gez v0, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sget-wide v2, Lcom/igexin/b/a/d/f;->u:J

    add-long/2addr p1, v2

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->p:Landroid/app/PendingIntent;

    if-eqz v0, :cond_2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-ge v0, v2, :cond_1

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    iget-object v2, p0, Lcom/igexin/b/a/d/f;->p:Landroid/app/PendingIntent;

    :goto_0
    invoke-virtual {v0, v1, p1, p2, v2}, Landroid/app/AlarmManager;->set(IJLandroid/app/PendingIntent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    goto :goto_1

    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    iget-object v2, p0, Lcom/igexin/b/a/d/f;->p:Landroid/app/PendingIntent;

    invoke-virtual {v0, v1, p1, p2, v2}, Landroid/app/AlarmManager;->setExact(IJLandroid/app/PendingIntent;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    :try_start_2
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    iget-object v2, p0, Lcom/igexin/b/a/d/f;->p:Landroid/app/PendingIntent;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "TaskService"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v1, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 5

    iget-boolean v0, p0, Lcom/igexin/b/a/d/f;->a:Z

    if-nez v0, :cond_2

    invoke-static {}, Lcom/igexin/push/util/j;->b()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    const-string v0, "power"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/PowerManager;

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->m:Landroid/os/PowerManager;

    iput-boolean v1, p0, Lcom/igexin/b/a/d/f;->t:Z

    const-string v0, "alarm"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/AlarmManager;

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    new-instance v0, Landroid/content/IntentFilter;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AlarmTaskSchedule."

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    new-instance v0, Landroid/content/IntentFilter;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AlarmTaskScheduleBak."

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    new-instance v0, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.SCREEN_OFF"

    invoke-direct {v0, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    new-instance v0, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.SCREEN_ON"

    invoke-direct {v0, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "AlarmNioTaskSchedule."

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/b/a/d/f;->s:Ljava/lang/String;

    new-instance v0, Landroid/content/IntentFilter;

    iget-object v2, p0, Lcom/igexin/b/a/d/f;->s:Ljava/lang/String;

    invoke-direct {v0, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    const/high16 v0, 0x8000000

    invoke-static {p1}, Lcom/igexin/push/util/j;->a(Landroid/content/Context;)I

    move-result v2

    const/16 v4, 0x1f

    if-lt v2, v4, :cond_0

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1e

    if-lt v2, v4, :cond_0

    const/high16 v0, 0xc000000

    :cond_0
    new-instance v2, Landroid/content/Intent;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    iput-object v2, p0, Lcom/igexin/b/a/d/f;->o:Landroid/content/Intent;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    iget-object v3, p0, Lcom/igexin/b/a/d/f;->o:Landroid/content/Intent;

    invoke-static {p1, v2, v3, v0}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v2

    iput-object v2, p0, Lcom/igexin/b/a/d/f;->p:Landroid/app/PendingIntent;

    new-instance v2, Landroid/content/Intent;

    iget-object v3, p0, Lcom/igexin/b/a/d/f;->s:Ljava/lang/String;

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    iput-object v2, p0, Lcom/igexin/b/a/d/f;->q:Landroid/content/Intent;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    add-int/lit8 v2, v2, 0x2

    iget-object v3, p0, Lcom/igexin/b/a/d/f;->q:Landroid/content/Intent;

    invoke-static {p1, v2, v3, v0}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/b/a/d/f;->r:Landroid/app/PendingIntent;

    :cond_1
    iget-object p1, p0, Lcom/igexin/b/a/d/f;->h:Lcom/igexin/b/a/d/j;

    invoke-virtual {p1}, Lcom/igexin/b/a/d/j;->start()V

    :try_start_0
    invoke-static {}, Ljava/lang/Thread;->yield()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iput-boolean v1, p0, Lcom/igexin/b/a/d/f;->a:Z

    :cond_2
    return-void
.end method

.method public final a(Lcom/igexin/b/a/d/a/b;)Z
    .locals 5

    if-eqz p1, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->l:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->tryLock()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    :try_start_0
    iget-object v1, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {p1}, Lcom/igexin/b/a/d/a/b;->m()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/Set;->contains(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v2

    :cond_0
    :try_start_1
    iget-object v1, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    invoke-interface {p1}, Lcom/igexin/b/a/d/a/b;->m()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v1, v3, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 p1, 0x1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return p1

    :catchall_0
    move-exception p1

    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "TaskService|"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    goto :goto_0

    :catchall_1
    move-exception p1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw p1

    :cond_1
    :goto_0
    return v2

    :cond_2
    const/4 p1, 0x0

    throw p1
.end method

.method final a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/a/b;)Z
    .locals 2

    invoke-interface {p1}, Lcom/igexin/b/a/d/a/e;->b_()I

    move-result v0

    const/high16 v1, -0x80000000

    if-le v0, v1, :cond_2

    if-gez v0, :cond_2

    move-object v0, p1

    check-cast v0, Lcom/igexin/b/a/d/e;

    iget-boolean v1, v0, Lcom/igexin/b/a/d/e;->t:Z

    if-eqz v1, :cond_0

    invoke-interface {p2, v0, p0}, Lcom/igexin/b/a/d/a/b;->a(Lcom/igexin/b/a/d/e;Lcom/igexin/b/a/d/f;)Z

    move-result p1

    goto :goto_0

    :cond_0
    invoke-interface {p2, p1, p0}, Lcom/igexin/b/a/d/a/b;->a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/f;)Z

    move-result p1

    :goto_0
    if-eqz p1, :cond_1

    invoke-virtual {v0}, Lcom/igexin/b/a/d/e;->c()V

    :cond_1
    return p1

    :cond_2
    if-ltz v0, :cond_3

    const v1, 0x7fffffff

    if-ge v0, v1, :cond_3

    invoke-interface {p2, p1, p0}, Lcom/igexin/b/a/d/a/b;->a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/f;)Z

    move-result p1

    return p1

    :cond_3
    const/4 p1, 0x0

    return p1
.end method

.method public final a(Lcom/igexin/b/a/d/e;Z)Z
    .locals 3

    if-eqz p1, :cond_5

    iget-boolean v0, p1, Lcom/igexin/b/a/d/e;->p:Z

    const/4 v1, 0x0

    if-nez v0, :cond_4

    iget-boolean v0, p1, Lcom/igexin/b/a/d/e;->k:Z

    if-eqz v0, :cond_0

    goto :goto_2

    :cond_0
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    instance-of v2, p1, Lcom/igexin/b/a/b/e;

    if-eqz v2, :cond_1

    move-object v2, p1

    check-cast v2, Lcom/igexin/b/a/b/e;

    iget-object v2, v2, Lcom/igexin/b/a/b/e;->c:Ljava/lang/Object;

    instance-of v2, v2, Lcom/igexin/push/d/c/n;

    if-eqz v2, :cond_1

    const/4 v2, 0x1

    goto :goto_0

    :cond_1
    move v2, v1

    :goto_0
    if-eqz v2, :cond_2

    if-eqz p2, :cond_3

    const v1, 0x7fffffff

    goto :goto_1

    :cond_2
    if-eqz p2, :cond_3

    iget-object p2, v0, Lcom/igexin/b/a/d/d;->e:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    move-result v1

    :cond_3
    :goto_1
    iput v1, p1, Lcom/igexin/b/a/d/e;->A:I

    invoke-virtual {v0, p1}, Lcom/igexin/b/a/d/d;->a(Lcom/igexin/b/a/d/e;)Z

    move-result p1

    return p1

    :cond_4
    :goto_2
    return v1

    :cond_5
    const/4 p1, 0x0

    throw p1
.end method

.method public final a(Lcom/igexin/b/a/d/e;ZZ)Z
    .locals 2

    if-eqz p1, :cond_6

    iget-boolean v0, p1, Lcom/igexin/b/a/d/e;->m:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x1

    if-eqz p2, :cond_4

    if-nez p3, :cond_4

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->d()V

    :try_start_0
    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->b()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->g()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->e_()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-boolean p2, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez p2, :cond_1

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_1
    return v0

    :catchall_0
    move-exception p2

    goto :goto_0

    :catch_0
    move-exception p2

    :try_start_1
    iput-boolean v0, p1, Lcom/igexin/b/a/d/e;->t:Z

    iput-object p2, p1, Lcom/igexin/b/a/d/e;->B:Ljava/lang/Exception;

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->p()V

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->t()V

    invoke-virtual {p0, p1}, Lcom/igexin/b/a/d/f;->a(Ljava/lang/Object;)Z

    invoke-virtual {p0}, Lcom/igexin/b/a/d/f;->f()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    iget-boolean p2, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez p2, :cond_2

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_2
    return v1

    :goto_0
    iget-boolean p3, p1, Lcom/igexin/b/a/d/e;->t:Z

    if-nez p3, :cond_3

    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->c()V

    :cond_3
    throw p2

    :cond_4
    if-eqz p3, :cond_5

    if-eqz p2, :cond_5

    move v1, v0

    :cond_5
    invoke-virtual {p0, p1, v1}, Lcom/igexin/b/a/d/f;->a(Lcom/igexin/b/a/d/e;Z)Z

    move-result p1

    return p1

    :cond_6
    const/4 p1, 0x0

    throw p1
.end method

.method public final a(Ljava/lang/Class;)Z
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/igexin/b/a/d/d;->a(Ljava/lang/Class;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public final a(Ljava/lang/Object;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    :try_start_0
    instance-of v1, p1, Lcom/igexin/push/d/c/m;

    if-eqz v1, :cond_1

    move-object v1, p1

    check-cast v1, Lcom/igexin/push/d/c/m;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TaskService|responseQueue ++ task = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "@"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    instance-of v1, p1, Lcom/igexin/b/a/d/a/e;

    if-eqz v1, :cond_5

    move-object v1, p1

    check-cast v1, Lcom/igexin/b/a/d/a/e;

    invoke-interface {v1}, Lcom/igexin/b/a/d/a/e;->l()Z

    move-result v2

    if-eqz v2, :cond_2

    return v0

    :cond_2
    invoke-interface {v1, v0}, Lcom/igexin/b/a/d/a/e;->a(Z)V

    instance-of v2, p1, Lcom/igexin/push/d/b/a;

    if-nez v2, :cond_3

    instance-of p1, p1, Lcom/igexin/push/d/b/b;

    if-eqz p1, :cond_4

    :cond_3
    iget-object p1, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {p1}, Lcom/igexin/b/a/d/c;->a()V

    new-array p1, v0, [Ljava/lang/Object;

    const-string v0, "TaskService|change to primaryQueue"

    invoke-static {v0, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    iget-object p1, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {p1, v1}, Lcom/igexin/b/a/d/c;->a(Lcom/igexin/b/a/d/a/e;)V

    const/4 p1, 0x1

    return p1

    :cond_5
    new-instance p1, Ljava/lang/ClassCastException;

    const-string v0, "response Obj is not a TaskResult "

    invoke-direct {p1, v0}, Ljava/lang/ClassCastException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final b(J)V
    .locals 4

    invoke-static {}, Lcom/igexin/push/util/j;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setnioalarm|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v2

    const-string v3, "yyyy-MM-dd HH:mm:ss"

    invoke-direct {v1, v3, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2, p1, p2}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v1, v2}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-wide/16 v2, 0x0

    cmp-long v0, p1, v2

    if-gez v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    sget-wide v2, Lcom/igexin/b/a/d/f;->u:J

    add-long/2addr p1, v2

    :cond_1
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-ge v0, v2, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    :goto_0
    iget-object v2, p0, Lcom/igexin/b/a/d/f;->r:Landroid/app/PendingIntent;

    invoke-virtual {v0, v1, p1, p2, v2}, Landroid/app/AlarmManager;->set(IJLandroid/app/PendingIntent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_2
    :try_start_1
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    iget-object v2, p0, Lcom/igexin/b/a/d/f;->r:Landroid/app/PendingIntent;

    invoke-virtual {v0, v1, p1, p2, v2}, Landroid/app/AlarmManager;->setExact(IJLandroid/app/PendingIntent;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    :try_start_2
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    :goto_1
    return-void
.end method

.method public synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/igexin/b/a/d/e;

    check-cast p2, Lcom/igexin/b/a/d/e;

    invoke-virtual {p0, p1, p2}, Lcom/igexin/b/a/d/f;->a(Lcom/igexin/b/a/d/e;Lcom/igexin/b/a/d/e;)I

    move-result p1

    return p1
.end method

.method public final e()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->r:Landroid/app/PendingIntent;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->n:Landroid/app/AlarmManager;

    iget-object v1, p0, Lcom/igexin/b/a/d/f;->r:Landroid/app/PendingIntent;

    invoke-virtual {v0, v1}, Landroid/app/AlarmManager;->cancel(Landroid/app/PendingIntent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method protected final f()V
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->h:Lcom/igexin/b/a/d/j;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/igexin/b/a/d/j;->isInterrupted()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->h:Lcom/igexin/b/a/d/j;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/j;->interrupt()V

    :cond_0
    return-void
.end method

.method final g()V
    .locals 8

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/c;->c()Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/c;->d()Lcom/igexin/b/a/d/a/e;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "TaskService|notifyObserver responseQueue -- task = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/igexin/b/a/d/a/e;->a(Z)V

    iget-object v1, p0, Lcom/igexin/b/a/d/f;->l:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    const/high16 v3, -0x80000000

    :try_start_0
    iget-object v4, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    invoke-virtual {v4}, Ljava/util/HashMap;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_6

    invoke-interface {v0}, Lcom/igexin/b/a/d/a/e;->m()J

    move-result-wide v4

    const-wide/16 v6, 0x0

    cmp-long v6, v4, v6

    if-eqz v6, :cond_2

    iget-object v6, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v6, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/igexin/b/a/d/a/b;

    if-eqz v4, :cond_6

    invoke-interface {v4}, Lcom/igexin/b/a/d/a/b;->l()Z

    move-result v5

    if-eqz v5, :cond_6

    invoke-virtual {p0, v0, v4}, Lcom/igexin/b/a/d/f;->a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/a/b;)Z

    move-result v4

    goto :goto_2

    :cond_2
    iget-object v4, p0, Lcom/igexin/b/a/d/f;->i:Ljava/util/HashMap;

    invoke-virtual {v4}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move v5, v2

    :cond_3
    :goto_1
    :try_start_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_5

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/igexin/b/a/d/a/b;

    invoke-interface {v6}, Lcom/igexin/b/a/d/a/b;->l()Z

    move-result v7

    if-nez v7, :cond_4

    goto :goto_1

    :cond_4
    invoke-virtual {p0, v0, v6}, Lcom/igexin/b/a/d/f;->a(Lcom/igexin/b/a/d/a/e;Lcom/igexin/b/a/d/a/b;)Z

    move-result v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v5, :cond_3

    :cond_5
    move v4, v5

    goto :goto_2

    :catchall_0
    move-exception v4

    goto :goto_4

    :cond_6
    move v4, v2

    :goto_2
    if-nez v4, :cond_7

    invoke-interface {v0}, Lcom/igexin/b/a/d/a/e;->b_()I

    move-result v4

    if-le v4, v3, :cond_7

    if-gez v4, :cond_7

    :goto_3
    move-object v3, v0

    check-cast v3, Lcom/igexin/b/a/d/e;

    invoke-virtual {v3}, Lcom/igexin/b/a/d/e;->c()V

    :cond_7
    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    goto :goto_5

    :catchall_1
    move-exception v4

    move v5, v2

    :goto_4
    :try_start_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "TaskService|"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v6, v2, [Ljava/lang/Object;

    invoke-static {v4, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-nez v5, :cond_7

    invoke-interface {v0}, Lcom/igexin/b/a/d/a/e;->b_()I

    move-result v4

    if-le v4, v3, :cond_7

    if-gez v4, :cond_7

    goto :goto_3

    :goto_5
    instance-of v0, v0, Lcom/igexin/push/d/c/k;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/d/f;->j:Lcom/igexin/b/a/d/c;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/c;->b()V

    new-array v0, v2, [Ljava/lang/Object;

    const-string v1, "TaskService|queue -> secondRespQueue"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto/16 :goto_0

    :catchall_2
    move-exception v2

    if-nez v5, :cond_8

    invoke-interface {v0}, Lcom/igexin/b/a/d/a/e;->b_()I

    move-result v4

    if-le v4, v3, :cond_8

    if-gez v4, :cond_8

    check-cast v0, Lcom/igexin/b/a/d/e;

    invoke-virtual {v0}, Lcom/igexin/b/a/d/e;->c()V

    :cond_8
    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw v2

    :cond_9
    return-void
.end method

.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "android.intent.action.SCREEN_OFF"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/b/a/d/f;->t:Z

    new-array p1, v0, [Ljava/lang/Object;

    const-string p2, "screenoff"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object p1, p0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    iget-object p1, p1, Lcom/igexin/b/a/d/d;->h:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide p1

    const-wide/16 v0, 0x0

    cmp-long p1, p1, v0

    if-lez p1, :cond_4

    iget-object p1, p0, Lcom/igexin/b/a/d/f;->k:Lcom/igexin/b/a/d/d;

    iget-object p1, p1, Lcom/igexin/b/a/d/d;->h:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Lcom/igexin/b/a/d/f;->a(J)V

    goto :goto_1

    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v1, "android.intent.action.SCREEN_ON"

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iput-boolean v0, p0, Lcom/igexin/b/a/d/f;->t:Z

    new-array p1, v0, [Ljava/lang/Object;

    const-string p2, "screenon"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_1

    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v1, "AlarmTaskSchedule."

    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v1, "AlarmTaskScheduleBak."

    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/igexin/b/a/d/f;->s:Ljava/lang/String;

    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    new-array p1, v0, [Ljava/lang/Object;

    const-string p2, "receive nioalarm"

    invoke-static {p2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :try_start_0
    const-string p1, "TaskService|alarm time out #######"

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/b/a/a/f;->a()Lcom/igexin/b/a/b/a/a/f;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/a/a/f;->e()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_3
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "receivealarm|"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p2, p0, Lcom/igexin/b/a/d/f;->t:Z

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/igexin/b/a/d/f;->f()V

    :catch_0
    :cond_4
    :goto_1
    return-void
.end method
