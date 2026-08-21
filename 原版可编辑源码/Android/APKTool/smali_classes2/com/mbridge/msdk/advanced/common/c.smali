.class public final Lcom/mbridge/msdk/advanced/common/c;
.super Ljava/lang/Object;
.source "ReportData.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:I

.field private i:Z

.field private j:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/advanced/common/c;
    .locals 1

    .line 36
    new-instance v0, Lcom/mbridge/msdk/advanced/common/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/advanced/common/c;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->a:Ljava/lang/String;

    return-object p0
.end method

.method public final a(Z)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 28
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/common/c;->i:Z

    return-object p0
.end method

.method public final a(I)V
    .locals 0

    .line 50
    iput p1, p0, Lcom/mbridge/msdk/advanced/common/c;->j:I

    return-void
.end method

.method public final b(I)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 130
    iput p1, p0, Lcom/mbridge/msdk/advanced/common/c;->h:I

    return-object p0
.end method

.method public final b(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->b:Ljava/lang/String;

    return-object p0
.end method

.method public final b()Ljava/lang/String;
    .locals 3

    .line 135
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 137
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "&"

    if-nez v1, :cond_0

    const-string v1, "unit_id="

    .line 138
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 140
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "cid="

    .line 141
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 143
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->d:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "rid="

    .line 144
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 146
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "rid_n="

    .line 147
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 149
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "creative_id="

    .line 150
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 152
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->g:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "reason="

    .line 153
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 155
    :cond_5
    iget v1, p0, Lcom/mbridge/msdk/advanced/common/c;->h:I

    if-eqz v1, :cond_6

    const-string v1, "result="

    .line 156
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/advanced/common/c;->h:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 158
    :cond_6
    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/common/c;->i:Z

    if-eqz v1, :cond_7

    const-string v1, "hb=1"

    .line 159
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    :cond_7
    iget v1, p0, Lcom/mbridge/msdk/advanced/common/c;->j:I

    if-eqz v1, :cond_8

    const-string v1, "close_type="

    .line 162
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/advanced/common/c;->j:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    const-string v1, "network_type="

    .line 164
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 166
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    const-string v1, "key="

    .line 167
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/common/c;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 170
    :cond_9
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final c(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->c:Ljava/lang/String;

    return-object p0
.end method

.method public final d(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->d:Ljava/lang/String;

    return-object p0
.end method

.method public final e(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->f:Ljava/lang/String;

    return-object p0
.end method

.method public final f(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->g:Ljava/lang/String;

    return-object p0
.end method

.method public final g(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;
    .locals 0

    .line 120
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/common/c;->e:Ljava/lang/String;

    return-object p0
.end method
