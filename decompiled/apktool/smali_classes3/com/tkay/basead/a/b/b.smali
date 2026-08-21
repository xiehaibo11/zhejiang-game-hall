.class public Lcom/tkay/basead/a/b/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/a/b/d$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/a/b/b$a;,
        Lcom/tkay/basead/a/b/b$b;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field b:Lcom/tkay/core/common/f/h;

.field c:Lcom/tkay/core/common/f/j;

.field d:Lcom/tkay/core/common/f/i;

.field e:Ljava/lang/Runnable;

.field private f:Ljava/lang/String;

.field private g:Z

.field private h:I

.field private i:Ljava/lang/String;

.field private j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private k:Lcom/tkay/basead/a/b/b$b;

.field private l:Lcom/tkay/basead/a/a/c;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/basead/a/a/c<",
            "Ljava/lang/Void;",
            "Lcom/tkay/basead/c/e;",
            ">;"
        }
    .end annotation
.end field

.field private m:Lcom/tkay/basead/mraid/MraidWebView;

.field private volatile n:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    const-class v0, Lcom/tkay/basead/a/b/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/a/b/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V
    .locals 1

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 52
    new-instance v0, Lcom/tkay/basead/a/b/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/a/b/b$1;-><init>(Lcom/tkay/basead/a/b/b;)V

    iput-object v0, p0, Lcom/tkay/basead/a/b/b;->e:Ljava/lang/Runnable;

    .line 64
    iput-object p1, p0, Lcom/tkay/basead/a/b/b;->f:Ljava/lang/String;

    .line 65
    iput-boolean p2, p0, Lcom/tkay/basead/a/b/b;->g:Z

    .line 66
    iput-object p3, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    .line 67
    iput-object p4, p0, Lcom/tkay/basead/a/b/b;->d:Lcom/tkay/core/common/f/i;

    .line 68
    iget-object p1, p4, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    iput-object p1, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    .line 69
    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->m()I

    move-result p1

    iput p1, p0, Lcom/tkay/basead/a/b/b;->h:I

    .line 71
    new-instance p1, Lcom/tkay/basead/a/b/a;

    invoke-direct {p1}, Lcom/tkay/basead/a/b/a;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    .line 72
    new-instance p2, Lcom/tkay/basead/a/b/b$a;

    const/4 p3, 0x0

    invoke-direct {p2, p0, p3}, Lcom/tkay/basead/a/b/b$a;-><init>(Lcom/tkay/basead/a/b/b;B)V

    invoke-interface {p1, p2}, Lcom/tkay/basead/a/a/c;->a(Lcom/tkay/basead/a/a/b;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/mraid/MraidWebView;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/basead/a/b/b;->m:Lcom/tkay/basead/mraid/MraidWebView;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/basead/a/b/b;Lcom/tkay/basead/mraid/MraidWebView;)Lcom/tkay/basead/mraid/MraidWebView;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tkay/basead/a/b/b;->m:Lcom/tkay/basead/mraid/MraidWebView;

    return-object p1
.end method

.method private a()V
    .locals 8

    .line 133
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/h;->b(Lcom/tkay/core/common/f/j;)Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    .line 135
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->m()Ljava/lang/String;

    move-result-object v0

    .line 136
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Incomplete resource allocation! MissResource: "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "30003"

    invoke-static {v1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    return-void

    .line 140
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 143
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    return-void

    .line 147
    :cond_1
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v2, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_4

    .line 149
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 150
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 153
    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5, v4}, Lcom/tkay/core/common/f/h;->D(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 155
    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->S()I

    move-result v5

    invoke-static {v4, v5}, Lcom/tkay/basead/a/b/c;->b(Ljava/lang/String;I)Z

    move-result v5

    if-nez v5, :cond_3

    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 156
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "videoInfo:video file is not ready to play -> "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ",need readyRate:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/j;->S()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 157
    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 160
    :cond_2
    invoke-static {v4}, Lcom/tkay/basead/a/b/c;->c(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_3

    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 161
    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 166
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_5

    .line 168
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Offer("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->i:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "), all files have already exist"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 169
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    return-void

    .line 173
    :cond_5
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/tkay/basead/a/b/d;->a(Lcom/tkay/basead/a/b/d$a;)V

    .line 176
    monitor-enter p0

    move v1, v2

    :goto_2
    if-ge v1, v0, :cond_a

    .line 178
    :try_start_0
    iget-object v3, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v3, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 179
    iget-object v4, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v4, v3}, Lcom/tkay/core/common/f/h;->D(Ljava/lang/String;)Z

    move-result v4

    .line 180
    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->S()I

    move-result v5

    if-eqz v4, :cond_7

    .line 182
    invoke-static {v3, v5}, Lcom/tkay/basead/a/b/c;->b(Ljava/lang/String;I)Z

    move-result v4

    if-eqz v4, :cond_6

    .line 183
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v6, "Video file ready -> "

    invoke-direct {v4, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ",videoNeedReadyRate:"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 184
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v4

    invoke-virtual {v4, v3, v5}, Lcom/tkay/basead/a/b/d;->a(Ljava/lang/String;I)V

    goto :goto_3

    .line 187
    :cond_6
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v6, "Video file not exis -> "

    invoke-direct {v4, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",videoNeedReadyRate:"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 188
    new-instance v3, Lcom/tkay/basead/a/b/f;

    iget-object v4, p0, Lcom/tkay/basead/a/b/b;->f:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    iget-object v6, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-direct {v3, v4, v5, v6}, Lcom/tkay/basead/a/b/f;-><init>(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 189
    invoke-virtual {v3}, Lcom/tkay/basead/a/b/f;->a()V

    goto :goto_3

    .line 191
    :cond_7
    invoke-static {v3}, Lcom/tkay/basead/a/b/c;->a(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_9

    .line 194
    invoke-static {v3}, Lcom/tkay/basead/a/b/c;->c(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_8

    const/16 v4, 0x64

    .line 196
    invoke-static {v3, v4}, Lcom/tkay/basead/a/b/c;->a(Ljava/lang/String;I)V

    .line 197
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v5

    invoke-virtual {v5, v3, v4}, Lcom/tkay/basead/a/b/d;->a(Ljava/lang/String;I)V

    goto :goto_3

    .line 200
    :cond_8
    invoke-static {v3, v2}, Lcom/tkay/basead/a/b/c;->a(Ljava/lang/String;I)V

    .line 202
    new-instance v4, Lcom/tkay/basead/a/b/e;

    iget-object v5, p0, Lcom/tkay/basead/a/b/b;->f:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/tkay/basead/a/b/b;->g:Z

    iget-object v7, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-direct {v4, v5, v6, v7, v3}, Lcom/tkay/basead/a/b/e;-><init>(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Ljava/lang/String;)V

    .line 203
    invoke-virtual {v4}, Lcom/tkay/basead/a/b/e;->d()V

    :cond_9
    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_2

    .line 206
    :cond_a
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic a(Lcom/tkay/basead/a/b/b;Lcom/tkay/basead/c/e;)V
    .locals 0

    .line 32
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    return-void
.end method

.method private a(Lcom/tkay/basead/c/e;)V
    .locals 1

    const/4 v0, 0x1

    .line 338
    iput-boolean v0, p0, Lcom/tkay/basead/a/b/b;->n:Z

    .line 339
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    if-eqz v0, :cond_0

    .line 340
    invoke-interface {v0, p1}, Lcom/tkay/basead/a/a/c;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private a(Z)V
    .locals 3

    .line 211
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/mraid/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v0

    .line 213
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p1, "Incomplete resource allocation!"

    const-string v0, "Mraid Html or url is empty."

    .line 217
    invoke-static {p1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    return-void

    :cond_0
    if-nez p1, :cond_1

    .line 230
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    return-void

    .line 236
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-static {p1, v1}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object p1

    .line 237
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/a/b/b$2;

    invoke-direct {v2, p0, p1, v0}, Lcom/tkay/basead/a/b/b$2;-><init>(Lcom/tkay/basead/a/b/b;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b()V
    .locals 1

    .line 332
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    if-eqz v0, :cond_0

    .line 333
    invoke-interface {v0}, Lcom/tkay/basead/a/a/c;->a()V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/a/b/b;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/a/b/b$b;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/basead/a/b/b;->k:Lcom/tkay/basead/a/b/b$b;

    return-object p0
.end method

.method private c()V
    .locals 2

    .line 365
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/basead/a/b/d;->b(Lcom/tkay/basead/a/b/d$a;)V

    .line 366
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->e:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/a/b/b;)Ljava/lang/String;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tkay/basead/a/b/b;->i:Ljava/lang/String;

    return-object p0
.end method

.method private d()V
    .locals 4

    .line 370
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->e:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/basead/a/b/b;->h:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/basead/a/b/b;)V
    .locals 1

    .line 2365
    invoke-static {}, Lcom/tkay/basead/a/b/d;->a()Lcom/tkay/basead/a/b/d;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/basead/a/b/d;->b(Lcom/tkay/basead/a/b/d$a;)V

    .line 2366
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object p0, p0, Lcom/tkay/basead/a/b/b;->e:Ljava/lang/Runnable;

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/basead/a/b/b$b;)V
    .locals 3

    .line 92
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_9

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    if-nez v1, :cond_0

    goto/16 :goto_0

    .line 97
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/b/b;->i:Ljava/lang/String;

    .line 99
    iput-object p1, p0, Lcom/tkay/basead/a/b/b;->k:Lcom/tkay/basead/a/b/b$b;

    .line 1370
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->e:Ljava/lang/Runnable;

    iget v1, p0, Lcom/tkay/basead/a/b/b;->h:I

    int-to-long v1, v1

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 108
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->g()Z

    move-result p1

    const/4 v0, 0x1

    if-nez p1, :cond_1

    .line 109
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    invoke-interface {p1, v0}, Lcom/tkay/basead/a/a/c;->a(I)V

    .line 110
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->a()V

    return-void

    :cond_1
    const/4 p1, 0x0

    .line 112
    iput-boolean p1, p0, Lcom/tkay/basead/a/b/b;->n:Z

    .line 114
    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    if-eqz v1, :cond_8

    .line 115
    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->t()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "1"

    .line 116
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "3"

    .line 117
    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    :cond_2
    move p1, v0

    .line 119
    :cond_3
    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    invoke-interface {v1, v0}, Lcom/tkay/basead/a/a/c;->a(I)V

    if-eqz p1, :cond_4

    .line 121
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->l:Lcom/tkay/basead/a/a/c;

    const/4 v0, 0x2

    invoke-interface {p1, v0}, Lcom/tkay/basead/a/a/c;->a(I)V

    .line 122
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->a()V

    .line 124
    :cond_4
    iget-boolean p1, p0, Lcom/tkay/basead/a/b/b;->n:Z

    if-eqz p1, :cond_5

    return-void

    .line 127
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->V()Z

    move-result p1

    .line 2211
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/mraid/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v0

    .line 2213
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    const-string p1, "Incomplete resource allocation!"

    const-string v0, "Mraid Html or url is empty."

    .line 2217
    invoke-static {p1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    return-void

    :cond_6
    if-nez p1, :cond_7

    .line 2230
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    return-void

    .line 2236
    :cond_7
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-static {p1, v1}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object p1

    .line 2237
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/a/b/b$2;

    invoke-direct {v2, p0, p1, v0}, Lcom/tkay/basead/a/b/b$2;-><init>(Lcom/tkay/basead/a/b/b;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_8
    return-void

    :cond_9
    :goto_0
    const-string p1, "-9999"

    const-string v0, "mraid params error!"

    .line 93
    invoke-static {p1, v0}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 1

    .line 309
    monitor-enter p0

    .line 310
    :try_start_0
    invoke-static {p1, p2}, Lcom/tkay/basead/a/b/c;->a(Ljava/lang/String;I)V

    .line 311
    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->b:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/h;->D(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->c:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->S()I

    move-result v0

    if-gt v0, p2, :cond_1

    .line 312
    :cond_0
    iget-object p2, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    if-eqz p2, :cond_1

    .line 313
    iget-object p2, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 314
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/basead/a/b/b;->i:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " onResourceLoadSuccess -> resourceUrl:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ",curmUrlList.size():"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 315
    iget-object p1, p0, Lcom/tkay/basead/a/b/b;->j:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_1

    .line 316
    invoke-direct {p0}, Lcom/tkay/basead/a/b/b;->b()V

    .line 320
    :cond_1
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 325
    monitor-enter p0

    const/4 v0, -0x1

    .line 326
    :try_start_0
    invoke-static {p1, v0}, Lcom/tkay/basead/a/b/c;->a(Ljava/lang/String;I)V

    .line 327
    invoke-direct {p0, p2}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/c/e;)V

    .line 328
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
