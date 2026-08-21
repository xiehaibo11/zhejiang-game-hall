.class public Lcom/mbridge/msdk/video/js/a/c;
.super Ljava/lang/Object;
.source "DefaultJSCommon.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/js/a/c$a;,
        Lcom/mbridge/msdk/video/js/a/c$b;
    }
.end annotation


# instance fields
.field protected a:Z

.field protected b:Z

.field protected c:I

.field protected d:I

.field protected e:I

.field protected f:I

.field protected g:I

.field protected h:I

.field protected i:I

.field protected j:Ljava/lang/String;

.field protected k:Lcom/mbridge/msdk/videocommon/d/c;

.field protected l:Lcom/mbridge/msdk/click/b;

.field public m:Lcom/mbridge/msdk/video/js/c$a;

.field protected n:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 25
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->a:Z

    .line 28
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    .line 30
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->c:I

    .line 31
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->d:I

    .line 32
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->e:I

    .line 34
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->f:I

    .line 35
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->g:I

    const/4 v0, 0x1

    .line 37
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->h:I

    const/4 v0, -0x1

    .line 39
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->i:I

    .line 52
    new-instance v0, Lcom/mbridge/msdk/video/js/a/c$a;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/js/a/c$a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/c;->m:Lcom/mbridge/msdk/video/js/c$a;

    const/4 v0, 0x2

    .line 57
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->n:I

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 123
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->f:I

    return v0
.end method

.method public final a(I)V
    .locals 0

    .line 65
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->n:I

    return-void
.end method

.method public a(ILjava/lang/String;)V
    .locals 2

    .line 186
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "statistics,type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",json:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DefaultJSCommon"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Landroid/app/Activity;)V
    .locals 1

    const-string p1, "DefaultJSCommon"

    const-string v0, "setActivity "

    .line 224
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Landroid/content/Context;)V
    .locals 1

    const-string p1, "DefaultJSCommon"

    const-string v0, "setViewContext "

    .line 229
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/mbridge/msdk/video/bt/module/a/b;)V
    .locals 1

    const-string p1, "DefaultJSCommon"

    const-string v0, "setInstallDialogCallback "

    .line 234
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/video/js/c$a;)V
    .locals 2

    .line 164
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setTrackingListener:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/c;->m:Lcom/mbridge/msdk/video/js/c$a;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 2

    .line 170
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setSetting:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/c;->k:Lcom/mbridge/msdk/videocommon/d/c;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 158
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setUnitId:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 159
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/c;->j:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 2

    .line 143
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setIsShowingTransparent:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    return-void
.end method

.method public final b()I
    .locals 1

    .line 133
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->g:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 76
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->d:I

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 1

    const-string p1, "DefaultJSCommon"

    const-string v0, "setNotchArea"

    .line 260
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 154
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/a/c;->a:Z

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 71
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->c:I

    return-void
.end method

.method public final c()Z
    .locals 1

    .line 149
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->a:Z

    return v0
.end method

.method public click(ILjava/lang/String;)V
    .locals 2

    .line 245
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "click:type"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",pt:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DefaultJSCommon"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public d()Ljava/lang/String;
    .locals 2

    const-string v0, "DefaultJSCommon"

    const-string v1, "init"

    .line 239
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "{}"

    return-object v0
.end method

.method public final d(I)V
    .locals 0

    .line 81
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->e:I

    return-void
.end method

.method public e()V
    .locals 2

    const-string v0, "DefaultJSCommon"

    const-string v1, "finish"

    .line 255
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final e(I)V
    .locals 0

    .line 118
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->f:I

    return-void
.end method

.method public final f()V
    .locals 2

    const-string v0, "DefaultJSCommon"

    const-string v1, "release"

    .line 176
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 177
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c;->l:Lcom/mbridge/msdk/click/b;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 178
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Z)V

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c;->l:Lcom/mbridge/msdk/click/b;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 180
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/c;->l:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/click/b;->a()V

    :cond_0
    return-void
.end method

.method public final f(I)V
    .locals 0

    .line 128
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->g:I

    return-void
.end method

.method public g()V
    .locals 0

    return-void
.end method

.method public final g(I)V
    .locals 0

    .line 196
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->i:I

    return-void
.end method

.method public final h()I
    .locals 1

    .line 201
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->i:I

    return v0
.end method

.method public h(I)Ljava/lang/String;
    .locals 1

    const-string p1, "DefaultJSCommon"

    const-string v0, "getSDKInfo"

    .line 206
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "{}"

    return-object p1
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 2

    .line 250
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "handlerH5Exception,code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",msg:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "DefaultJSCommon"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final i()I
    .locals 2

    .line 218
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getAlertDialogRole "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/video/js/a/c;->h:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 219
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->h:I

    return v0
.end method

.method public final i(I)V
    .locals 2

    .line 212
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setAlertDialogRole "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DefaultJSCommon"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 213
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/c;->h:I

    return-void
.end method

.method public j()Ljava/lang/String;
    .locals 2

    const-string v0, "DefaultJSCommon"

    const-string v1, "getNotchArea"

    .line 265
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    return-object v0
.end method

.method public final k()I
    .locals 1

    .line 87
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->c:I

    if-nez v0, :cond_0

    .line 88
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 89
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->c:I

    .line 92
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->c:I

    return v0
.end method

.method public final l()I
    .locals 1

    .line 97
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->d:I

    if-nez v0, :cond_0

    .line 98
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 99
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->d:I

    .line 102
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->d:I

    return v0
.end method

.method public final m()I
    .locals 1

    .line 108
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->e:I

    if-nez v0, :cond_0

    .line 109
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 110
    iput v0, p0, Lcom/mbridge/msdk/video/js/a/c;->e:I

    .line 113
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/c;->e:I

    return v0
.end method

.method public final n()Z
    .locals 1

    .line 138
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/c;->b:Z

    return v0
.end method
