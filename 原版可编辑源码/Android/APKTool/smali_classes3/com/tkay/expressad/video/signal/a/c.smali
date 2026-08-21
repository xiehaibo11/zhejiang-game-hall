.class public Lcom/tkay/expressad/video/signal/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/signal/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/signal/a/c$a;,
        Lcom/tkay/expressad/video/signal/a/c$b;
    }
.end annotation


# static fields
.field protected static final d:Ljava/lang/String; = "DefaultJSCommon"


# instance fields
.field protected e:Z

.field protected f:Z

.field protected g:I

.field protected h:I

.field protected i:I

.field protected j:I

.field protected k:I

.field protected l:I

.field protected m:I

.field protected n:Ljava/lang/String;

.field protected o:Lcom/tkay/expressad/videocommon/e/d;

.field protected p:Lcom/tkay/expressad/videocommon/c/c;

.field protected q:Lcom/tkay/expressad/a/a;

.field public r:Lcom/tkay/expressad/video/signal/c$a;

.field protected s:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 20
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->e:Z

    .line 23
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    .line 25
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->g:I

    .line 26
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->h:I

    .line 27
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->i:I

    .line 29
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->j:I

    .line 30
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->k:I

    const/4 v0, 0x1

    .line 32
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->l:I

    const/4 v0, -0x1

    .line 34
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->m:I

    .line 47
    new-instance v0, Lcom/tkay/expressad/video/signal/a/c$a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/signal/a/c$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/signal/a/c;->r:Lcom/tkay/expressad/video/signal/c$a;

    const/4 v0, 0x2

    .line 52
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->s:I

    return-void
.end method

.method private a(Lcom/tkay/expressad/videocommon/c/c;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/c;->p:Lcom/tkay/expressad/videocommon/c/c;

    return-void
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 60
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->s:I

    return-void
.end method

.method public a(ILjava/lang/String;)V
    .locals 2

    .line 181
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "statistics,type:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",json:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/signal/c$a;)V
    .locals 2

    .line 159
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "setTrackingListener:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 160
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/c;->r:Lcom/tkay/expressad/video/signal/c$a;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 2

    .line 165
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "setSetting:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 166
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/c;->o:Lcom/tkay/expressad/videocommon/e/d;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 154
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/c;->n:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 139
    iput-boolean p1, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 133
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    return v0
.end method

.method public final b()I
    .locals 1

    .line 92
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->h:I

    if-nez v0, :cond_0

    .line 93
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 94
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->h:I

    .line 97
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->h:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 71
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->h:I

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final c()I
    .locals 1

    .line 82
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->g:I

    if-nez v0, :cond_0

    .line 83
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 84
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->g:I

    .line 87
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->g:I

    return v0
.end method

.method public final c(I)V
    .locals 0

    .line 66
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->g:I

    return-void
.end method

.method public click(ILjava/lang/String;)V
    .locals 2

    .line 240
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "click:type"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",pt:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final d()I
    .locals 1

    .line 103
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->i:I

    if-nez v0, :cond_0

    .line 104
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->f:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 105
    iput v0, p0, Lcom/tkay/expressad/video/signal/a/c;->i:I

    .line 108
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->i:I

    return v0
.end method

.method public final d(I)V
    .locals 0

    .line 76
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->i:I

    return-void
.end method

.method public final e()I
    .locals 1

    .line 118
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->j:I

    return v0
.end method

.method public final e(I)V
    .locals 0

    .line 113
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->j:I

    return-void
.end method

.method public final f()I
    .locals 1

    .line 128
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->k:I

    return v0
.end method

.method public final f(I)V
    .locals 0

    .line 123
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->k:I

    return-void
.end method

.method public final g(I)V
    .locals 0

    .line 191
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->m:I

    return-void
.end method

.method public final g()Z
    .locals 1

    .line 144
    iget-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->e:Z

    return v0
.end method

.method public h(I)Ljava/lang/String;
    .locals 0

    const-string p1, "{}"

    return-object p1
.end method

.method public final h()V
    .locals 1

    const/4 v0, 0x1

    .line 149
    iput-boolean v0, p0, Lcom/tkay/expressad/video/signal/a/c;->e:Z

    return-void
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 2

    .line 245
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handlerH5Exception,code="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",msg:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public i()Ljava/lang/String;
    .locals 1

    const-string v0, "{}"

    return-object v0
.end method

.method public final i(I)V
    .locals 0

    .line 208
    iput p1, p0, Lcom/tkay/expressad/video/signal/a/c;->l:I

    return-void
.end method

.method public j()V
    .locals 0

    return-void
.end method

.method public final k()V
    .locals 2

    .line 172
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c;->q:Lcom/tkay/expressad/a/a;

    if-eqz v0, :cond_0

    .line 173
    invoke-virtual {v0}, Lcom/tkay/expressad/a/a;->a()V

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c;->q:Lcom/tkay/expressad/a/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/out/j$c;)V

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/c;->q:Lcom/tkay/expressad/a/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/a/a;->b()V

    :cond_0
    return-void
.end method

.method public l()V
    .locals 0

    return-void
.end method

.method public final m()I
    .locals 1

    .line 196
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->m:I

    return v0
.end method

.method public final n()I
    .locals 2

    .line 213
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getAlertDialogRole "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/expressad/video/signal/a/c;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 214
    iget v0, p0, Lcom/tkay/expressad/video/signal/a/c;->l:I

    return v0
.end method

.method public o()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method
