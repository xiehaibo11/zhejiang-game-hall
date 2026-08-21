.class public final Lcom/loc/ai;
.super Ljava/lang/Object;
.source "AdiuStorageModel.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/ai$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;

.field private static f:Lcom/loc/ai;


# instance fields
.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/lang/String;

.field private final d:Landroid/content/Context;

.field private final e:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "SU2hhcmVkUHJlZmVyZW5jZUFkaXU"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/ai;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p1

    if-nez p1, :cond_0

    new-instance p1, Lcom/loc/ai$a;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, v0, p0}, Lcom/loc/ai$a;-><init>(Landroid/os/Looper;Lcom/loc/ai;)V

    :goto_0
    iput-object p1, p0, Lcom/loc/ai;->e:Landroid/os/Handler;

    return-void

    :cond_0
    new-instance p1, Lcom/loc/ai$a;

    invoke-direct {p1, p0}, Lcom/loc/ai$a;-><init>(Lcom/loc/ai;)V

    goto :goto_0
.end method

.method static synthetic a(Lcom/loc/ai;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/loc/ai;
    .locals 2

    sget-object v0, Lcom/loc/ai;->f:Lcom/loc/ai;

    if-nez v0, :cond_1

    const-class v0, Lcom/loc/ai;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/ai;->f:Lcom/loc/ai;

    if-nez v1, :cond_0

    new-instance v1, Lcom/loc/ai;

    invoke-direct {v1, p0}, Lcom/loc/ai;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/loc/ai;->f:Lcom/loc/ai;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/loc/ai;->f:Lcom/loc/ai;

    return-object p0
.end method

.method static synthetic a(Lcom/loc/ai;Ljava/lang/String;I)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/loc/ai;->a(Ljava/lang/String;I)V

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;I)V
    .locals 2

    monitor-enter p0

    :try_start_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    new-instance v0, Lcom/loc/ai$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/loc/ai$1;-><init>(Lcom/loc/ai;Ljava/lang/String;I)V

    invoke-virtual {v0}, Lcom/loc/ai$1;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    invoke-static {p1}, Lcom/loc/ao;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_5

    and-int/lit8 v0, p2, 0x1

    if-lez v0, :cond_2

    :try_start_2
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/ai;->c:Ljava/lang/String;

    :goto_0
    invoke-static {v0, v1, p1}, Landroid/provider/Settings$System;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v1, p0, Lcom/loc/ai;->c:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    nop

    :cond_2
    :goto_1
    and-int/lit8 v0, p2, 0x10

    if-lez v0, :cond_3

    :try_start_3
    iget-object v0, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    iget-object v1, p0, Lcom/loc/ai;->c:Ljava/lang/String;

    invoke-static {v0, v1, p1}, Lcom/loc/ak;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    and-int/lit16 p2, p2, 0x100

    if-lez p2, :cond_5

    iget-object p2, p0, Lcom/loc/ai;->d:Landroid/content/Context;

    sget-object v0, Lcom/loc/ai;->a:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p2, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    iget-object v0, p0, Lcom/loc/ai;->c:Ljava/lang/String;

    invoke-interface {p2, v0, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x9

    if-lt p1, v0, :cond_4

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit p0

    return-void

    :cond_4
    :try_start_4
    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->commit()Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :cond_5
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic b(Lcom/loc/ai;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/loc/ai;->c:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ai;->c:Ljava/lang/String;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/ai;->b:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/loc/ai;->b:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    const/16 v0, 0x111

    invoke-direct {p0, p1, v0}, Lcom/loc/ai;->a(Ljava/lang/String;I)V

    return-void
.end method
