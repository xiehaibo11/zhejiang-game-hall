.class public final Lcom/tkay/expressad/video/bt/module/b/e;
.super Lcom/tkay/expressad/video/bt/module/b/c;


# static fields
.field private static final a:Ljava/lang/String; = "ProxyShowRewardListener"


# instance fields
.field private b:Lcom/tkay/expressad/video/bt/module/b/h;

.field private c:Lcom/tkay/expressad/videocommon/e/d;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Z

.field private g:Landroid/content/Context;

.field private h:Z

.field private i:Z

.field private j:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;ZLcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 32
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/module/b/c;-><init>()V

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->h:Z

    .line 28
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->i:Z

    .line 30
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->j:Z

    .line 33
    iput-object p5, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    .line 34
    iput-object p3, p0, Lcom/tkay/expressad/video/bt/module/b/e;->c:Lcom/tkay/expressad/videocommon/e/d;

    .line 35
    iput-object p7, p0, Lcom/tkay/expressad/video/bt/module/b/e;->d:Ljava/lang/String;

    .line 36
    iput-object p6, p0, Lcom/tkay/expressad/video/bt/module/b/e;->e:Ljava/lang/String;

    .line 37
    iput-boolean p2, p0, Lcom/tkay/expressad/video/bt/module/b/e;->f:Z

    .line 38
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->g:Landroid/content/Context;

    .line 1046
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    .line 1047
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const-wide/16 p5, 0x0

    if-nez p1, :cond_1

    .line 1048
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p1

    if-nez p1, :cond_0

    .line 1050
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object p1

    :cond_0
    if-eqz p1, :cond_1

    .line 1054
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->l()J

    move-result-wide p1

    const-wide/16 v1, 0x3e8

    mul-long/2addr p1, v1

    goto :goto_0

    :cond_1
    move-wide p1, p5

    .line 1057
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p7

    invoke-virtual {p7}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object p7

    if-eqz p7, :cond_2

    .line 1059
    invoke-virtual {p7}, Lcom/tkay/expressad/videocommon/e/a;->c()J

    move-result-wide p5

    :cond_2
    if-eqz p4, :cond_5

    .line 1062
    invoke-virtual {p4, p5, p6, p1, p2}, Lcom/tkay/expressad/foundation/d/c;->a(JJ)Z

    move-result p1

    if-eqz p1, :cond_4

    const/4 p1, 0x1

    .line 1063
    invoke-virtual {p4, p1}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 1064
    invoke-virtual {p3}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result p2

    if-ne p2, p1, :cond_3

    .line 1065
    invoke-virtual {p4, p1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1067
    :cond_3
    invoke-virtual {p4, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 1070
    :cond_4
    invoke-virtual {p4, v0}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 1071
    invoke-virtual {p4, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_5
    return-void
.end method

.method private static a(Lcom/tkay/expressad/videocommon/e/d;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 7

    .line 46
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    .line 47
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-wide/16 v1, 0x0

    if-nez v0, :cond_1

    .line 48
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 50
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    :cond_0
    if-eqz v0, :cond_1

    .line 54
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->l()J

    move-result-wide v3

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    goto :goto_0

    :cond_1
    move-wide v3, v1

    .line 57
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 59
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->c()J

    move-result-wide v1

    :cond_2
    if-eqz p1, :cond_5

    .line 62
    invoke-virtual {p1, v1, v2, v3, v4}, Lcom/tkay/expressad/foundation/d/c;->a(JJ)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    .line 63
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 64
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result p0

    if-ne p0, v0, :cond_3

    .line 65
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 67
    :cond_3
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V

    return-void

    .line 70
    :cond_4
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->e(I)V

    .line 71
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->m(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_5
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 80
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/b/c;->a()V

    .line 81
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->h:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 82
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->h:Z

    .line 83
    invoke-interface {v0}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 115
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/b/c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 117
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 106
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/b/c;->a(Ljava/lang/String;)V

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->i:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 108
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->i:Z

    .line 109
    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(ZI)V
    .locals 2

    .line 98
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/b/c;->a(ZI)V

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->j:Z

    if-nez v1, :cond_0

    .line 100
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZI)V

    :cond_0
    return-void
.end method

.method public final a(ZLcom/tkay/expressad/videocommon/c/c;)V
    .locals 2

    .line 89
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/b/c;->a(ZLcom/tkay/expressad/videocommon/c/c;)V

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->j:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    .line 91
    iput-boolean v1, p0, Lcom/tkay/expressad/video/bt/module/b/e;->j:Z

    .line 92
    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(ZLcom/tkay/expressad/videocommon/c/c;)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 131
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/b/c;->b()V

    .line 132
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 133
    invoke-interface {v0}, Lcom/tkay/expressad/video/bt/module/b/h;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 123
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/b/c;->c()V

    .line 124
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/b/e;->b:Lcom/tkay/expressad/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 125
    invoke-interface {v0}, Lcom/tkay/expressad/video/bt/module/b/h;->c()V

    :cond_0
    return-void
.end method
