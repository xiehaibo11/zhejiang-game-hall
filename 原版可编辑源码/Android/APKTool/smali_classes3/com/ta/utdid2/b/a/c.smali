.class public Lcom/ta/utdid2/b/a/c;
.super Ljava/lang/Object;
.source "SourceFile"


# instance fields
.field private a:Landroid/content/SharedPreferences$Editor;

.field private a:Landroid/content/SharedPreferences;

.field private a:Lcom/ta/utdid2/b/a/b$a;

.field private a:Lcom/ta/utdid2/b/a/b;

.field private a:Lcom/ta/utdid2/b/a/d;

.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:Z

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V
    .locals 9

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 20
    iput-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Ljava/lang/String;

    .line 21
    iput-object v0, p0, Lcom/ta/utdid2/b/a/c;->b:Ljava/lang/String;

    const/4 v0, 0x0

    .line 22
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->c:Z

    .line 23
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    .line 24
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    const/4 v1, 0x0

    .line 25
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    .line 26
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    .line 27
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    .line 28
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    .line 29
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->mContext:Landroid/content/Context;

    .line 30
    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    .line 31
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->f:Z

    .line 39
    iput-boolean p4, p0, Lcom/ta/utdid2/b/a/c;->c:Z

    .line 40
    iput-boolean p5, p0, Lcom/ta/utdid2/b/a/c;->f:Z

    .line 41
    iput-object p3, p0, Lcom/ta/utdid2/b/a/c;->a:Ljava/lang/String;

    .line 42
    iput-object p2, p0, Lcom/ta/utdid2/b/a/c;->b:Ljava/lang/String;

    .line 43
    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->mContext:Landroid/content/Context;

    const-string p4, "t"

    const-wide/16 v2, 0x0

    if-eqz p1, :cond_0

    .line 48
    invoke-virtual {p1, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    iput-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    .line 49
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-interface {v4, p4, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v4

    goto :goto_0

    :cond_0
    move-wide v4, v2

    .line 53
    :goto_0
    :try_start_0
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v6

    .line 55
    invoke-virtual {v6}, Ljava/lang/Exception;->printStackTrace()V

    .line 57
    :goto_1
    invoke-static {v1}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 58
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    goto :goto_2

    :cond_1
    const-string v6, "mounted"

    .line 60
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    const/4 v7, 0x1

    if-eqz v6, :cond_2

    .line 61
    iput-boolean v7, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    iput-boolean v7, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    goto :goto_2

    :cond_2
    const-string v6, "mounted_ro"

    .line 63
    invoke-virtual {v1, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 64
    iput-boolean v7, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    .line 65
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    goto :goto_2

    .line 67
    :cond_3
    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    iput-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    .line 70
    :goto_2
    iget-boolean v1, p0, Lcom/ta/utdid2/b/a/c;->d:Z

    const-string v6, "t2"

    if-nez v1, :cond_4

    iget-boolean v1, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    if-eqz v1, :cond_d

    :cond_4
    if-eqz p1, :cond_d

    .line 72
    invoke-static {p2}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_d

    .line 73
    invoke-direct {p0, p2}, Lcom/ta/utdid2/b/a/c;->a(Ljava/lang/String;)Lcom/ta/utdid2/b/a/d;

    move-result-object p2

    iput-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    .line 74
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    if-eqz p2, :cond_d

    .line 77
    :try_start_1
    invoke-virtual {p2, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p2

    iput-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    .line 79
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-interface {p2, p4, v2, v3}, Lcom/ta/utdid2/b/a/b;->getLong(Ljava/lang/String;J)J

    move-result-wide v7
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4

    if-nez p5, :cond_7

    cmp-long p2, v4, v7

    if-lez p2, :cond_5

    .line 83
    :try_start_2
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, p1, p2}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    .line 84
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    goto/16 :goto_4

    :cond_5
    cmp-long p2, v4, v7

    if-gez p2, :cond_6

    .line 89
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    iget-object p4, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-direct {p0, p2, p4}, Lcom/ta/utdid2/b/a/c;->a(Lcom/ta/utdid2/b/a/b;Landroid/content/SharedPreferences;)V

    .line 90
    invoke-virtual {p1, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    goto/16 :goto_4

    :cond_6
    cmp-long p1, v4, v7

    if-nez p1, :cond_e

    .line 93
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, p1, p2}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    .line 94
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    goto/16 :goto_4

    .line 99
    :cond_7
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-interface {p2, v6, v2, v3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p4
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    .line 100
    :try_start_3
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-interface {p2, v6, v2, v3}, Lcom/ta/utdid2/b/a/b;->getLong(Ljava/lang/String;J)J

    move-result-wide v4
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    cmp-long p2, p4, v4

    if-gez p2, :cond_8

    cmp-long p2, p4, v2

    if-lez p2, :cond_8

    .line 103
    :try_start_4
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, p1, p2}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    .line 104
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    goto :goto_3

    :cond_8
    cmp-long p2, p4, v4

    if-lez p2, :cond_9

    cmp-long p2, v4, v2

    if-lez p2, :cond_9

    .line 109
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-direct {p0, p2, v1}, Lcom/ta/utdid2/b/a/c;->a(Lcom/ta/utdid2/b/a/b;Landroid/content/SharedPreferences;)V

    .line 110
    invoke-virtual {p1, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    goto :goto_3

    :cond_9
    cmp-long p2, p4, v2

    if-nez p2, :cond_a

    cmp-long p2, v4, v2

    if-lez p2, :cond_a

    .line 113
    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-direct {p0, p2, v1}, Lcom/ta/utdid2/b/a/c;->a(Lcom/ta/utdid2/b/a/b;Landroid/content/SharedPreferences;)V

    .line 114
    invoke-virtual {p1, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    goto :goto_3

    :cond_a
    cmp-long p1, v4, v2

    if-nez p1, :cond_b

    cmp-long p1, p4, v2

    if-lez p1, :cond_b

    .line 117
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, p1, p2}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    .line 118
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    goto :goto_3

    :cond_b
    cmp-long p1, p4, v4

    if-nez p1, :cond_c

    .line 122
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object p2, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, p1, p2}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    .line 123
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1, p3, v0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    :cond_c
    :goto_3
    move-wide v7, v4

    :catch_2
    move-wide v4, p4

    goto :goto_4

    :catch_3
    nop

    goto :goto_4

    :catch_4
    :cond_d
    move-wide v7, v2

    :cond_e
    :goto_4
    cmp-long p1, v4, v7

    if-nez p1, :cond_f

    cmp-long p1, v4, v2

    if-nez p1, :cond_12

    cmp-long p1, v7, v2

    if-nez p1, :cond_12

    .line 136
    :cond_f
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    .line 137
    iget-boolean p3, p0, Lcom/ta/utdid2/b/a/c;->f:Z

    if-eqz p3, :cond_10

    if-eqz p3, :cond_12

    cmp-long p3, v4, v2

    if-nez p3, :cond_12

    cmp-long p3, v7, v2

    if-nez p3, :cond_12

    .line 139
    :cond_10
    iget-object p3, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    if-eqz p3, :cond_11

    .line 140
    invoke-interface {p3}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p3

    .line 141
    invoke-interface {p3, v6, p1, p2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 142
    invoke-interface {p3}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 145
    :cond_11
    :try_start_5
    iget-object p3, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-eqz p3, :cond_12

    .line 146
    iget-object p3, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-interface {p3}, Lcom/ta/utdid2/b/a/b;->a()Lcom/ta/utdid2/b/a/b$a;

    move-result-object p3

    .line 147
    invoke-interface {p3, v6, p1, p2}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;J)Lcom/ta/utdid2/b/a/b$a;

    .line 148
    invoke-interface {p3}, Lcom/ta/utdid2/b/a/b$a;->commit()Z
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_5

    :catch_5
    :cond_12
    return-void
.end method

.method private a(Ljava/lang/String;)Lcom/ta/utdid2/b/a/d;
    .locals 1

    .line 158
    invoke-direct {p0, p1}, Lcom/ta/utdid2/b/a/c;->a(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 160
    new-instance v0, Lcom/ta/utdid2/b/a/d;

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/ta/utdid2/b/a/d;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    .line 161
    iget-object p1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Ljava/lang/String;)Ljava/io/File;
    .locals 4

    .line 167
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 169
    new-instance v1, Ljava/io/File;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    .line 170
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v2, v3

    const/4 v0, 0x1

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    aput-object v3, v2, v0

    const/4 v0, 0x2

    aput-object p1, v2, v0

    const-string p1, "%s%s%s"

    .line 169
    invoke-static {p1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 171
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 172
    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    :cond_0
    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V
    .locals 4

    if-eqz p1, :cond_6

    if-eqz p2, :cond_6

    .line 181
    invoke-interface {p2}, Lcom/ta/utdid2/b/a/b;->a()Lcom/ta/utdid2/b/a/b$a;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 183
    invoke-interface {p2}, Lcom/ta/utdid2/b/a/b$a;->b()Lcom/ta/utdid2/b/a/b$a;

    .line 184
    invoke-interface {p1}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 185
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 186
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 187
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 188
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    .line 189
    instance-of v2, v0, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 190
    check-cast v0, Ljava/lang/String;

    invoke-interface {p2, v1, v0}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/ta/utdid2/b/a/b$a;

    goto :goto_0

    .line 191
    :cond_1
    instance-of v2, v0, Ljava/lang/Integer;

    if-eqz v2, :cond_2

    .line 192
    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-interface {p2, v1, v0}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b$a;

    goto :goto_0

    .line 193
    :cond_2
    instance-of v2, v0, Ljava/lang/Long;

    if-eqz v2, :cond_3

    .line 194
    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    invoke-interface {p2, v1, v2, v3}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;J)Lcom/ta/utdid2/b/a/b$a;

    goto :goto_0

    .line 195
    :cond_3
    instance-of v2, v0, Ljava/lang/Float;

    if-eqz v2, :cond_4

    .line 196
    check-cast v0, Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    invoke-interface {p2, v1, v0}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;F)Lcom/ta/utdid2/b/a/b$a;

    goto :goto_0

    .line 197
    :cond_4
    instance-of v2, v0, Ljava/lang/Boolean;

    if-eqz v2, :cond_0

    .line 198
    check-cast v0, Ljava/lang/Boolean;

    .line 199
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 198
    invoke-interface {p2, v1, v0}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;Z)Lcom/ta/utdid2/b/a/b$a;

    goto :goto_0

    .line 202
    :cond_5
    invoke-interface {p2}, Lcom/ta/utdid2/b/a/b$a;->commit()Z

    :cond_6
    return-void
.end method

.method private a(Lcom/ta/utdid2/b/a/b;Landroid/content/SharedPreferences;)V
    .locals 4

    if-eqz p1, :cond_6

    if-eqz p2, :cond_6

    .line 209
    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 211
    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    .line 212
    invoke-interface {p1}, Lcom/ta/utdid2/b/a/b;->getAll()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 213
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 214
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 215
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 216
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    .line 217
    instance-of v2, v0, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 218
    check-cast v0, Ljava/lang/String;

    invoke-interface {p2, v1, v0}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 219
    :cond_1
    instance-of v2, v0, Ljava/lang/Integer;

    if-eqz v2, :cond_2

    .line 220
    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-interface {p2, v1, v0}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 221
    :cond_2
    instance-of v2, v0, Ljava/lang/Long;

    if-eqz v2, :cond_3

    .line 222
    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    invoke-interface {p2, v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 223
    :cond_3
    instance-of v2, v0, Ljava/lang/Float;

    if-eqz v2, :cond_4

    .line 224
    check-cast v0, Ljava/lang/Float;

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    invoke-interface {p2, v1, v0}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 225
    :cond_4
    instance-of v2, v0, Ljava/lang/Boolean;

    if-eqz v2, :cond_0

    .line 226
    check-cast v0, Ljava/lang/Boolean;

    .line 227
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 226
    invoke-interface {p2, v1, v0}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 230
    :cond_5
    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_6
    return-void
.end method

.method private b()V
    .locals 1

    .line 247
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_0

    .line 248
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    iput-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    .line 250
    :cond_0
    iget-boolean v0, p0, Lcom/ta/utdid2/b/a/c;->e:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-eqz v0, :cond_1

    .line 251
    invoke-interface {v0}, Lcom/ta/utdid2/b/a/b;->a()Lcom/ta/utdid2/b/a/b$a;

    move-result-object v0

    iput-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    .line 253
    :cond_1
    invoke-direct {p0}, Lcom/ta/utdid2/b/a/c;->b()Z

    return-void
.end method

.method private b()Z
    .locals 1

    .line 236
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-eqz v0, :cond_1

    .line 237
    invoke-interface {v0}, Lcom/ta/utdid2/b/a/b;->a()Z

    move-result v0

    if-nez v0, :cond_0

    .line 239
    invoke-virtual {p0}, Lcom/ta/utdid2/b/a/c;->commit()Z

    :cond_0
    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public commit()Z
    .locals 6

    .line 373
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 374
    iget-object v2, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    const/4 v3, 0x0

    if-eqz v2, :cond_1

    .line 375
    iget-boolean v4, p0, Lcom/ta/utdid2/b/a/c;->f:Z

    if-nez v4, :cond_0

    .line 376
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    if-eqz v4, :cond_0

    const-string v4, "t"

    .line 377
    invoke-interface {v2, v4, v0, v1}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 380
    :cond_0
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    .line 384
    :goto_0
    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_2

    .line 385
    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->mContext:Landroid/content/Context;

    if-eqz v1, :cond_2

    .line 386
    iget-object v2, p0, Lcom/ta/utdid2/b/a/c;->a:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    :cond_2
    const/4 v1, 0x0

    .line 392
    :try_start_0
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v2

    .line 394
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 396
    :goto_1
    invoke-static {v1}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_7

    const-string v2, "mounted"

    .line 397
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 398
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-nez v4, :cond_4

    .line 399
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->b:Ljava/lang/String;

    .line 400
    invoke-direct {p0, v4}, Lcom/ta/utdid2/b/a/c;->a(Ljava/lang/String;)Lcom/ta/utdid2/b/a/d;

    move-result-object v4

    if-eqz v4, :cond_5

    .line 402
    iget-object v5, p0, Lcom/ta/utdid2/b/a/c;->a:Ljava/lang/String;

    invoke-virtual {v4, v5, v3}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object v4

    iput-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    .line 404
    iget-boolean v4, p0, Lcom/ta/utdid2/b/a/c;->f:Z

    if-nez v4, :cond_3

    .line 405
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    iget-object v5, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-direct {p0, v4, v5}, Lcom/ta/utdid2/b/a/c;->a(Landroid/content/SharedPreferences;Lcom/ta/utdid2/b/a/b;)V

    goto :goto_2

    .line 407
    :cond_3
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    iget-object v5, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    invoke-direct {p0, v4, v5}, Lcom/ta/utdid2/b/a/c;->a(Lcom/ta/utdid2/b/a/b;Landroid/content/SharedPreferences;)V

    .line 409
    :goto_2
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    invoke-interface {v4}, Lcom/ta/utdid2/b/a/b;->a()Lcom/ta/utdid2/b/a/b$a;

    move-result-object v4

    iput-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    goto :goto_3

    .line 412
    :cond_4
    iget-object v4, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    if-eqz v4, :cond_5

    .line 413
    invoke-interface {v4}, Lcom/ta/utdid2/b/a/b$a;->commit()Z

    move-result v4

    if-nez v4, :cond_5

    const/4 v0, 0x0

    .line 419
    :cond_5
    :goto_3
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_6

    const-string v2, "mounted_ro"

    .line 421
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-eqz v1, :cond_7

    .line 424
    :cond_6
    :try_start_1
    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    if-eqz v1, :cond_7

    .line 425
    iget-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/d;

    iget-object v2, p0, Lcom/ta/utdid2/b/a/c;->a:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/ta/utdid2/b/a/d;->a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;

    move-result-object v1

    iput-object v1, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_7
    return v0
.end method

.method public getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 437
    invoke-direct {p0}, Lcom/ta/utdid2/b/a/c;->b()Z

    .line 438
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences;

    const-string v1, ""

    if-eqz v0, :cond_0

    .line 439
    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 440
    invoke-static {v0}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    return-object v0

    .line 444
    :cond_0
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b;

    if-eqz v0, :cond_1

    .line 445
    invoke-interface {v0, p1, v1}, Lcom/ta/utdid2/b/a/b;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1
.end method

.method public putString(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 305
    invoke-static {p1}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "t"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 306
    invoke-direct {p0}, Lcom/ta/utdid2/b/a/c;->b()V

    .line 307
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    if-eqz v0, :cond_0

    .line 308
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 310
    :cond_0
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    if-eqz v0, :cond_1

    .line 311
    invoke-interface {v0, p1, p2}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/ta/utdid2/b/a/b$a;

    :cond_1
    return-void
.end method

.method public remove(Ljava/lang/String;)V
    .locals 1

    .line 317
    invoke-static {p1}, Lcom/ta/utdid2/a/a/f;->isEmpty(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "t"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 318
    invoke-direct {p0}, Lcom/ta/utdid2/b/a/c;->b()V

    .line 319
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Landroid/content/SharedPreferences$Editor;

    if-eqz v0, :cond_0

    .line 320
    invoke-interface {v0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 322
    :cond_0
    iget-object v0, p0, Lcom/ta/utdid2/b/a/c;->a:Lcom/ta/utdid2/b/a/b$a;

    if-eqz v0, :cond_1

    .line 323
    invoke-interface {v0, p1}, Lcom/ta/utdid2/b/a/b$a;->a(Ljava/lang/String;)Lcom/ta/utdid2/b/a/b$a;

    :cond_1
    return-void
.end method
