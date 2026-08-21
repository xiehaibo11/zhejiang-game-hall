.class public Lcom/tkay/expressad/video/module/a/a/o;
.super Lcom/tkay/expressad/video/module/a/a/k;


# instance fields
.field private ag:Z

.field protected ah:I

.field private ai:Z

.field private aj:Z

.field private ak:Z

.field private al:Z

.field private am:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private an:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V
    .locals 10

    move-object v9, p0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p3

    move-object v3, p2

    move-object v4, p4

    move-object v5, p5

    move-object/from16 v6, p6

    move/from16 v7, p7

    move/from16 v8, p8

    .line 34
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/video/module/a/a/k;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/b/a;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    const/4 v0, 0x0

    .line 20
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->al:Z

    .line 21
    iput v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->ah:I

    const/4 v0, -0x1

    .line 41
    iput v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->an:I

    .line 35
    iget-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->W:Z

    if-eqz v0, :cond_0

    .line 36
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->R()Ljava/util/Map;

    move-result-object v0

    iput-object v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->am:Ljava/util/Map;

    .line 38
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    iput v0, v9, Lcom/tkay/expressad/video/module/a/a/o;->ah:I

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/Object;)V
    .locals 7

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-eq p1, v0, :cond_a

    const/4 v2, 0x6

    if-eq p1, v2, :cond_a

    const/4 v2, 0x7

    if-eq p1, v2, :cond_8

    const/16 v0, 0xb

    const/4 v2, 0x0

    if-eq p1, v0, :cond_7

    const/16 v0, 0xc

    if-eq p1, v0, :cond_6

    const/16 v0, 0xf

    if-eq p1, v0, :cond_0

    const/16 v0, 0x10

    if-eq p1, v0, :cond_a

    goto/16 :goto_2

    .line 81
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->e()V

    .line 82
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->d()V

    .line 83
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->c()V

    if-eqz p2, :cond_1

    .line 86
    instance-of v0, p2, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    if-eqz v0, :cond_1

    .line 87
    move-object v0, p2

    check-cast v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iget v2, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    .line 88
    move-object v0, p2

    check-cast v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    move v6, v2

    move v2, v0

    move v0, v6

    goto :goto_0

    :cond_1
    move v0, v2

    :goto_0
    if-nez v2, :cond_2

    .line 90
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_2

    .line 91
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v2

    .line 93
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    iget v5, p0, Lcom/tkay/expressad/video/module/a/a/o;->af:I

    invoke-static {v3, v4, v0, v2, v5}, Lcom/tkay/expressad/video/module/b/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;III)V

    .line 94
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/a/a/o;->am:Ljava/util/Map;

    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/o;->ac:Ljava/lang/String;

    invoke-static {v3, v4, v5, v0}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/util/Map;Ljava/lang/String;I)V

    .line 95
    iget-boolean v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->ak:Z

    if-nez v3, :cond_3

    .line 96
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->ak:Z

    .line 97
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/a/a/o;->ac:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/tkay/expressad/video/module/b/a;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 99
    :cond_3
    iget-boolean v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->al:Z

    if-nez v3, :cond_5

    iget v3, p0, Lcom/tkay/expressad/video/module/a/a/o;->ah:I

    if-nez v3, :cond_4

    goto :goto_1

    :cond_4
    iget v2, p0, Lcom/tkay/expressad/video/module/a/a/o;->ah:I

    :goto_1
    if-lt v0, v2, :cond_5

    .line 100
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->al:Z

    const/16 p1, 0x11

    .line 109
    :cond_5
    iput v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->an:I

    goto/16 :goto_2

    .line 130
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->b()V

    .line 2209
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(Z)V

    goto :goto_2

    .line 1209
    :cond_7
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/c;->a()Lcom/tkay/expressad/videocommon/b/c;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/b/c;->a(Z)V

    .line 116
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->b()V

    goto :goto_2

    .line 50
    :cond_8
    iget-boolean v2, p0, Lcom/tkay/expressad/video/module/a/a/o;->W:Z

    if-eqz v2, :cond_b

    if-eqz p2, :cond_b

    instance-of v2, p2, Ljava/lang/Integer;

    if-eqz v2, :cond_b

    .line 51
    move-object v2, p2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-ne v2, v0, :cond_9

    .line 53
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->ai:Z

    if-nez v0, :cond_b

    .line 54
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->ai:Z

    .line 55
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/b/a;->b(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_2

    :cond_9
    if-ne v2, v1, :cond_b

    .line 58
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->ag:Z

    if-nez v0, :cond_b

    .line 59
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->ag:Z

    .line 60
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/b/a;->c(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_2

    .line 70
    :cond_a
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->W:Z

    if-eqz v0, :cond_b

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->aj:Z

    if-nez v0, :cond_b

    .line 71
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->aj:Z

    .line 72
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/o;->b()V

    .line 73
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/o;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/b/a;->d(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V

    .line 137
    :cond_b
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/o;->ae:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 139
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
