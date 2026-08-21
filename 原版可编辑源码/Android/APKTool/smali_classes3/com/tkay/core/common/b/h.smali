.class public Lcom/tkay/core/common/b/h;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/core/common/b/h;


# instance fields
.field private final a:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Z

.field private g:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 29
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/h;->a:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/b/h;
    .locals 2

    .line 40
    sget-object v0, Lcom/tkay/core/common/b/h;->b:Lcom/tkay/core/common/b/h;

    if-nez v0, :cond_1

    .line 41
    const-class v0, Lcom/tkay/core/common/b/h;

    monitor-enter v0

    .line 42
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/b/h;->b:Lcom/tkay/core/common/b/h;

    if-nez v1, :cond_0

    .line 43
    new-instance v1, Lcom/tkay/core/common/b/h;

    invoke-direct {v1}, Lcom/tkay/core/common/b/h;-><init>()V

    sput-object v1, Lcom/tkay/core/common/b/h;->b:Lcom/tkay/core/common/b/h;

    .line 44
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 46
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/b/h;->b:Lcom/tkay/core/common/b/h;

    return-object v0
.end method

.method private e()Z
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a(ILcom/tkay/core/common/f/d;)V
    .locals 6

    if-eqz p2, :cond_5

    const/4 v0, 0x6

    const/4 v1, 0x4

    if-eq p1, v1, :cond_0

    if-eq p1, v0, :cond_0

    goto/16 :goto_0

    .line 53
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v2

    .line 54
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->G()Z

    move-result v3

    if-nez v3, :cond_1

    return-void

    .line 62
    :cond_1
    invoke-virtual {p0, v2}, Lcom/tkay/core/common/b/h;->a(Lcom/tkay/core/c/a;)Z

    .line 65
    invoke-direct {p0}, Lcom/tkay/core/common/b/h;->e()Z

    move-result v3

    if-nez v3, :cond_2

    return-void

    :cond_2
    const-string v3, ""

    .line 74
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v4

    if-eqz v4, :cond_3

    const-string v5, "user_id"

    .line 76
    invoke-interface {v4, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 87
    :catchall_0
    :cond_3
    :try_start_1
    invoke-virtual {v2}, Lcom/tkay/core/c/a;->h()I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_4

    if-ne p1, v1, :cond_4

    .line 96
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->H()I

    move-result p1

    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->k()Ljava/lang/String;

    move-result-object v0

    .line 97
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->w()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object p2

    const/4 v1, 0x2

    .line 96
    invoke-static {v3, p1, v0, p2, v1}, Lcom/reyun/mobdna/MobDNA;->dna_event_ad(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;I)V

    return-void

    .line 99
    :cond_4
    invoke-virtual {v2}, Lcom/tkay/core/c/a;->f()I

    move-result v1

    if-ne v1, v5, :cond_5

    if-ne p1, v0, :cond_5

    .line 108
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->H()I

    move-result p1

    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->k()Ljava/lang/String;

    move-result-object v0

    .line 109
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->w()D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object p2

    const/4 v1, 0x3

    .line 108
    invoke-static {v3, p1, v0, p2, v1}, Lcom/reyun/mobdna/MobDNA;->dna_event_ad(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_5
    :goto_0
    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/core/c/a;)Z
    .locals 2

    monitor-enter p0

    .line 137
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/b/h;->g:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 138
    monitor-exit p0

    return v1

    :cond_0
    const/4 v0, 0x0

    if-eqz p1, :cond_6

    .line 141
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->d()I

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eq p1, v1, :cond_1

    goto :goto_0

    .line 149
    :cond_1
    :try_start_2
    iget-object p1, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 150
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/reyun/mobdna/MobDNA;->getClientInfo(Landroid/content/Context;)Lcom/reyun/mobdna/MobClientInfo;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez p1, :cond_3

    .line 154
    monitor-exit p0

    return v0

    .line 157
    :cond_3
    :try_start_3
    iget-object v0, p1, Lcom/reyun/mobdna/MobClientInfo;->oid:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    .line 158
    iget-object v0, p1, Lcom/reyun/mobdna/MobClientInfo;->appkey:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    .line 159
    iget-object p1, p1, Lcom/reyun/mobdna/MobClientInfo;->rdid:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    .line 161
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "oid: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", appkey: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ", rdid: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 170
    :catchall_0
    :cond_4
    :try_start_4
    invoke-direct {p0}, Lcom/tkay/core/common/b/h;->e()Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/core/common/b/h;->g:Z

    .line 172
    iget-boolean v0, p0, Lcom/tkay/core/common/b/h;->f:Z

    if-nez v0, :cond_5

    if-eqz p1, :cond_5

    .line 173
    iput-boolean v1, p0, Lcom/tkay/core/common/b/h;->f:Z

    .line 176
    iget-object p1, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/k/c;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    :cond_5
    iget-boolean p1, p0, Lcom/tkay/core/common/b/h;->g:Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    monitor-exit p0

    return p1

    .line 143
    :cond_6
    :goto_0
    monitor-exit p0

    return v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/tkay/core/common/b/h;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/core/common/b/h;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 132
    iget-object v0, p0, Lcom/tkay/core/common/b/h;->e:Ljava/lang/String;

    return-object v0
.end method
