.class final Lcom/tkay/expressad/reward/a/d$i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "i"
.end annotation


# static fields
.field public static final a:I = 0x1f1

.field public static final b:I = 0x35b

.field public static final c:I = 0x139

.field public static final d:I = 0x1f6


# instance fields
.field private e:Lcom/tkay/expressad/foundation/d/c;

.field private f:Lcom/tkay/expressad/reward/a/d;

.field private g:J

.field private h:Ljava/lang/String;

.field private i:I

.field private j:Lcom/tkay/expressad/videocommon/e/d;

.field private k:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;ILcom/tkay/expressad/videocommon/e/d;Z)V
    .locals 2

    .line 3026
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 3018
    iput v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/4 v0, 0x1

    .line 3024
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$i;->k:Z

    .line 3027
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/reward/a/d$i;->g:J

    .line 3028
    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    .line 3029
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    .line 3030
    iput p4, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    .line 3031
    iput-object p5, p0, Lcom/tkay/expressad/reward/a/d$i;->j:Lcom/tkay/expressad/videocommon/e/d;

    .line 3033
    iput-object p2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    .line 3035
    iput-boolean p6, p0, Lcom/tkay/expressad/reward/a/d$i;->k:Z

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 13

    .line 3041
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 3042
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/expressad/reward/a/d$i;->g:J

    sub-long/2addr v2, v4

    .line 3045
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v4, 0x1f1

    if-ne v0, v4, :cond_1

    .line 3046
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$i;->k:Z

    if-eqz v0, :cond_9

    .line 3047
    new-instance v0, Lcom/tkay/expressad/foundation/d/r;

    const-string v5, "2000043"

    const/16 v6, 0xe

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v7

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v9

    iget-object v10, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    const-string v11, ""

    const-string v12, "1"

    move-object v4, v0

    move-object v8, p1

    invoke-direct/range {v4 .. v12}, Lcom/tkay/expressad/foundation/d/r;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 3049
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 3050
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 3051
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 3052
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->b(I)V

    .line 3053
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v1, 0x11f

    if-ne p1, v1, :cond_0

    const-string p1, "3"

    .line 3054
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->a(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 3055
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result p1

    const/16 v1, 0x5e

    if-ne p1, v1, :cond_9

    const-string p1, "1"

    .line 3056
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->a(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 3059
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v2, 0x35b

    if-ne v0, v2, :cond_5

    .line 3061
    new-instance v0, Lcom/tkay/expressad/foundation/d/r;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/d/r;-><init>()V

    const-string v2, "2000045"

    .line 3062
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/r;->h(Ljava/lang/String;)V

    .line 3063
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz v2, :cond_3

    .line 3065
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 3066
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/d$i;->j:Lcom/tkay/expressad/videocommon/e/d;

    invoke-static {v2, v3, p1, v4, v5}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    .line 3068
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->q(Lcom/tkay/expressad/reward/a/d;)Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 3070
    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v2

    .line 3071
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/r;->c(I)V

    .line 3074
    :cond_3
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(I)V

    .line 3075
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_4

    .line 3076
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 3077
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 3078
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 3080
    :cond_4
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->b(Ljava/lang/String;)V

    const-string p1, ""

    .line 3081
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->i(Ljava/lang/String;)V

    .line 3082
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->f(Ljava/lang/String;)V

    goto :goto_0

    .line 3084
    :cond_5
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v2, 0x1f6

    if-ne v0, v2, :cond_8

    .line 3086
    new-instance v0, Lcom/tkay/expressad/foundation/d/r;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/d/r;-><init>()V

    const-string v2, "2000045"

    .line 3087
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/r;->h(Ljava/lang/String;)V

    .line 3088
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz v2, :cond_6

    .line 3089
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->q(Lcom/tkay/expressad/reward/a/d;)Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 3091
    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v2

    .line 3092
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/foundation/d/r;->c(I)V

    .line 3096
    :cond_6
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(I)V

    .line 3098
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_7

    .line 3099
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 3100
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 3101
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 3104
    :cond_7
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->b(Ljava/lang/String;)V

    const-string p1, ""

    .line 3105
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->i(Ljava/lang/String;)V

    .line 3106
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->f(Ljava/lang/String;)V

    goto :goto_0

    .line 3107
    :cond_8
    iget p1, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v0, 0x139

    if-ne p1, v0, :cond_9

    return-void

    .line 3118
    :cond_9
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz p1, :cond_b

    .line 3119
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 3121
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result v0

    if-eqz v0, :cond_a

    .line 3122
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 3124
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 3125
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    const/4 v0, 0x0

    .line 3126
    iput-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    .line 3129
    :cond_a
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    :try_start_2
    monitor-exit p1

    throw v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_b
    return-void

    :catchall_1
    move-exception p1

    .line 3133
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 12

    .line 3142
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/expressad/reward/a/d$i;->g:J

    sub-long/2addr v0, v2

    .line 3146
    iget v2, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v3, 0x1f1

    if-ne v2, v3, :cond_1

    .line 3147
    iget-boolean v2, p0, Lcom/tkay/expressad/reward/a/d$i;->k:Z

    if-eqz v2, :cond_5

    .line 3148
    new-instance v2, Lcom/tkay/expressad/foundation/d/r;

    const-string v4, "2000043"

    const/4 v5, 0x3

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v8

    iget-object v9, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    const-string v10, "zip download failed"

    const-string v11, "1"

    move-object v3, v2

    move-object v7, p2

    invoke-direct/range {v3 .. v11}, Lcom/tkay/expressad/foundation/d/r;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 3150
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 3151
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 3152
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 3153
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->b(I)V

    .line 3154
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x11f

    if-ne v0, v1, :cond_0

    const-string v0, "3"

    .line 3155
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 3156
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v0

    const/16 v1, 0x5e

    if-ne v0, v1, :cond_5

    const-string v0, "1"

    .line 3157
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/r;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 3160
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v1, 0x35b

    if-ne v0, v1, :cond_4

    .line 3161
    new-instance v0, Lcom/tkay/expressad/foundation/d/r;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/d/r;-><init>()V

    const-string v1, "2000045"

    .line 3162
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->h(Ljava/lang/String;)V

    .line 3163
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz v1, :cond_2

    .line 3164
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v1}, Lcom/tkay/expressad/reward/a/d;->q(Lcom/tkay/expressad/reward/a/d;)Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 3166
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    invoke-static {}, Lcom/tkay/expressad/foundation/h/k;->a()I

    move-result v1

    .line 3167
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->c(I)V

    :cond_2
    const/4 v1, 0x3

    .line 3170
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(I)V

    .line 3171
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_3

    .line 3172
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->g(Ljava/lang/String;)V

    .line 3173
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->d(Ljava/lang/String;)V

    .line 3174
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->e:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->e(Ljava/lang/String;)V

    .line 3176
    :cond_3
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/d/r;->b(Ljava/lang/String;)V

    .line 3177
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/d/r;->i(Ljava/lang/String;)V

    .line 3178
    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$i;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/r;->f(Ljava/lang/String;)V

    goto :goto_0

    .line 3179
    :cond_4
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$i;->i:I

    const/16 v1, 0x139

    if-ne v0, v1, :cond_5

    return-void

    .line 3192
    :cond_5
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz v0, :cond_7

    .line 3194
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 3198
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz p2, :cond_6

    .line 3199
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    const-string v0, "clear error info failed"

    invoke-static {p2, v0}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 3202
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 3204
    :cond_6
    :goto_1
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 3206
    :cond_7
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    if-eqz p1, :cond_8

    const/4 p1, 0x0

    .line 3207
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$i;->f:Lcom/tkay/expressad/reward/a/d;

    :cond_8
    return-void
.end method
