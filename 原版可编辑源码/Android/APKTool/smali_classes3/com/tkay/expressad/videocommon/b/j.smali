.class public final Lcom/tkay/expressad/videocommon/b/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/videocommon/b/j$a;
    }
.end annotation


# static fields
.field private static b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 21
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    .line 22
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    .line 23
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->d:Ljava/util/Map;

    .line 24
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 18
    invoke-direct {p0}, Lcom/tkay/expressad/videocommon/b/j;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/b/j;
    .locals 1

    .line 35
    sget-object v0, Lcom/tkay/expressad/videocommon/b/j$a;->a:Lcom/tkay/expressad/videocommon/b/j;

    return-object v0
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 68
    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/j;->b(Lcom/tkay/expressad/foundation/d/c;)V

    .line 69
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/videocommon/b/j;->e(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c$c;)Z
    .locals 5

    const/4 v0, 0x1

    if-nez p0, :cond_0

    return v0

    .line 205
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_5

    .line 207
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v1, :cond_1

    .line 208
    iget-object v2, v1, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    if-eqz v2, :cond_1

    .line 209
    iget-object v1, v1, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1221
    sget-object v3, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    invoke-static {v3, v2}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/util/Map;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_3

    :goto_0
    move v3, v0

    goto :goto_1

    .line 1226
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/tkay/expressad/foundation/g/d/b;->b(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_4

    goto :goto_0

    :cond_4
    :goto_1
    if-nez v3, :cond_2

    const/4 p0, 0x0

    return p0

    :cond_5
    return v0
.end method

.method private static a(Ljava/util/Map;Ljava/lang/String;)Z
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 152
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    if-eqz p0, :cond_2

    .line 156
    invoke-interface {p0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 157
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0

    .line 159
    :cond_1
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {p0, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 162
    :cond_2
    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    .line 163
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {p0, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method private a(ZLjava/lang/String;)Z
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    invoke-static {v0, p2}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/util/Map;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return v0

    :cond_0
    if-eqz p1, :cond_1

    .line 192
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 193
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 194
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {p1, p2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x1

    return p1

    :cond_1
    return v0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_3

    .line 112
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v0

    .line 113
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    if-eqz v1, :cond_0

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 117
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 118
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    if-eqz v1, :cond_1

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 119
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 124
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->f()Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 126
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c$c$a;

    if-eqz v0, :cond_2

    .line 128
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/c$c$a;->b:Ljava/util/List;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/util/List;)V

    goto :goto_0

    :cond_3
    return-void
.end method

.method private static b(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_2

    .line 137
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 140
    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 141
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 144
    sget-object v1, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    if-eqz v1, :cond_1

    invoke-interface {v1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 145
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/g/d/b;->b(Ljava/lang/String;)Z

    move-result v1

    .line 146
    sget-object v2, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public static c(Ljava/lang/String;)V
    .locals 2

    .line 96
    sget-object v0, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 97
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    .line 99
    :cond_0
    sget-object v0, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {v0, p0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->d:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 75
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->d:Ljava/util/Map;

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->d:Ljava/util/Map;

    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 1

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method private static g(Ljava/lang/String;)Z
    .locals 3

    .line 221
    sget-object v0, Lcom/tkay/expressad/videocommon/b/j;->b:Ljava/util/Map;

    invoke-static {v0, p0}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/util/Map;Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 226
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    invoke-virtual {v2, p0}, Lcom/tkay/expressad/foundation/g/d/b;->b(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v1

    :cond_1
    return v0
.end method

.method private static h(Ljava/lang/String;)Z
    .locals 2

    .line 236
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/m;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 237
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->d:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 238
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 p0, 0x0

    .line 240
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 244
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_0

    .line 245
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Z)V
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 83
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    .line 85
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 55
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 58
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    .line 60
    invoke-direct {p0, v0}, Lcom/tkay/expressad/videocommon/b/j;->b(Lcom/tkay/expressad/foundation/d/c;)V

    .line 61
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/videocommon/b/j;->e(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 40
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->a:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b(Ljava/lang/String;Z)V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 90
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    .line 92
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->c:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final c(Ljava/lang/String;Z)V
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 104
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    .line 106
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    invoke-static {p2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final d(Ljava/lang/String;)Z
    .locals 2

    .line 169
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 173
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/j;->e:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_1
    return v1
.end method
