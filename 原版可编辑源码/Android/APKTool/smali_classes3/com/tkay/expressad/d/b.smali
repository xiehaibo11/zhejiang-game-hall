.class public Lcom/tkay/expressad/d/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:I = 0x1f4

.field public static final c:Ljava/lang/String; = "tkay"

.field private static volatile d:Lcom/tkay/expressad/d/b;

.field private static e:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private static f:Lcom/tkay/expressad/d/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 18
    const-class v0, Lcom/tkay/expressad/d/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/d/b;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 22
    sput-object v0, Lcom/tkay/expressad/d/b;->d:Lcom/tkay/expressad/d/b;

    .line 82
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/tkay/expressad/d/b;->e:Ljava/util/HashMap;

    .line 84
    sput-object v0, Lcom/tkay/expressad/d/b;->f:Lcom/tkay/expressad/d/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/d/b;
    .locals 2

    .line 27
    sget-object v0, Lcom/tkay/expressad/d/b;->d:Lcom/tkay/expressad/d/b;

    if-nez v0, :cond_1

    .line 28
    const-class v0, Lcom/tkay/expressad/d/b;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/d/b;->d:Lcom/tkay/expressad/d/b;

    if-nez v1, :cond_0

    .line 30
    new-instance v1, Lcom/tkay/expressad/d/b;

    invoke-direct {v1}, Lcom/tkay/expressad/d/b;-><init>()V

    sput-object v1, Lcom/tkay/expressad/d/b;->d:Lcom/tkay/expressad/d/b;

    .line 31
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/d/b;->d:Lcom/tkay/expressad/d/b;

    return-object v0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 0

    .line 104
    invoke-static {p0, p1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p0

    if-nez p0, :cond_0

    .line 1270
    new-instance p0, Lcom/tkay/expressad/d/c;

    invoke-direct {p0}, Lcom/tkay/expressad/d/c;-><init>()V

    :cond_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    .line 66
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p0

    .line 67
    invoke-virtual {p0}, Lcom/tkay/expressad/d/a;->R()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4

    :try_start_0
    const-string v0, "tkay_expressad"

    const/4 v1, 0x0

    .line 88
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 89
    invoke-interface {p0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object p0

    .line 90
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 91
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 92
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 93
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 94
    sget-object v2, Lcom/tkay/expressad/d/b;->e:Ljava/util/HashMap;

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-static {v3}, Lcom/tkay/expressad/d/c;->b(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    return-void

    :catch_0
    move-exception p0

    .line 98
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 183
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 185
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object p1

    invoke-virtual {p1, p0, p2}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 186
    invoke-static {p2}, Lcom/tkay/expressad/d/c;->b(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p1

    .line 187
    sget-object p2, Lcom/tkay/expressad/d/b;->e:Ljava/util/HashMap;

    invoke-virtual {p2, p0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static b()Lcom/tkay/expressad/d/a;
    .locals 1

    .line 45
    sget-object v0, Lcom/tkay/expressad/d/b;->f:Lcom/tkay/expressad/d/a;

    if-nez v0, :cond_0

    .line 46
    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/d/b;->f:Lcom/tkay/expressad/d/a;

    .line 58
    :cond_0
    sget-object v0, Lcom/tkay/expressad/d/b;->f:Lcom/tkay/expressad/d/a;

    return-object v0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 0

    .line 2149
    invoke-static {p0, p1}, Lcom/tkay/expressad/d/b;->g(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p0

    if-nez p0, :cond_0

    .line 2270
    new-instance p0, Lcom/tkay/expressad/d/c;

    invoke-direct {p0}, Lcom/tkay/expressad/d/c;-><init>()V

    :cond_0
    return-object p0
.end method

.method public static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 195
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object v0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "ivreward_"

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c()Lcom/tkay/expressad/d/a;
    .locals 2

    .line 203
    new-instance v0, Lcom/tkay/expressad/d/a;

    invoke-direct {v0}, Lcom/tkay/expressad/d/a;-><init>()V

    .line 204
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->A()V

    .line 205
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->B()V

    .line 206
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->y()V

    .line 207
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->z()V

    .line 208
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->w()V

    .line 209
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->u()V

    .line 210
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->m()V

    const-string v1, "tkay"

    .line 211
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->a(Ljava/lang/String;)V

    .line 212
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->j()V

    .line 213
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->p()V

    .line 214
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->o()V

    .line 215
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->s()V

    .line 216
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->e()V

    .line 217
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->d()V

    .line 218
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->f()V

    .line 219
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->g()V

    .line 220
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->h()V

    .line 221
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->i()V

    .line 222
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->c()V

    const-string v1, "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"

    .line 223
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->c(Ljava/lang/String;)V

    const/16 v1, 0x78

    .line 224
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->a(I)V

    .line 225
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->O()V

    .line 226
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->N()V

    const/16 v1, 0x64

    .line 227
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->a(I)V

    .line 229
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->Q()V

    .line 230
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cH:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->e(I)V

    .line 231
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cJ:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->d(I)V

    .line 232
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cI:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->c(I)V

    .line 233
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->a()V

    .line 234
    sget v1, Lcom/tkay/expressad/foundation/g/a;->cO:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->f(I)V

    const/16 v1, 0xa

    .line 235
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/a;->b(I)V

    return-object v0
.end method

.method public static c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 0

    .line 120
    invoke-static {p0, p1}, Lcom/tkay/expressad/d/b;->g(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 121
    invoke-virtual {p0}, Lcom/tkay/expressad/d/c;->k()I

    move-result p1

    if-nez p1, :cond_0

    .line 122
    invoke-virtual {p0}, Lcom/tkay/expressad/d/c;->l()V

    :cond_0
    return-object p0
.end method

.method public static c(Ljava/lang/String;)V
    .locals 2

    .line 199
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object v0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "ivreward_"

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/foundation/a/a/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method private static d(Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 4

    .line 154
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    .line 155
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    .line 156
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 157
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    const/16 v3, 0x8

    .line 158
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 159
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 160
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->v()V

    .line 161
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->u()V

    .line 162
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/d/c;->a(Ljava/lang/String;)V

    .line 163
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->a(Ljava/util/List;)V

    .line 164
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/d/c;->b(Ljava/util/List;)V

    .line 165
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->p()V

    .line 166
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->r()V

    .line 167
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->q()V

    .line 168
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->o()V

    .line 169
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->n()V

    .line 170
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->j()V

    .line 171
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->l()V

    const/16 p0, 0x64

    .line 172
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/d/c;->c(I)V

    const/4 p0, 0x0

    .line 173
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/d/c;->d(I)V

    .line 174
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->h()V

    .line 175
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->e()V

    .line 176
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->c()V

    .line 177
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->w()V

    .line 178
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->x()V

    return-object v0
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 0

    .line 149
    invoke-static {p0, p1}, Lcom/tkay/expressad/d/b;->g(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object p0

    return-object p0
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 191
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object v0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "ivreward_"

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static f(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 37
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    invoke-static {p1}, Lcom/tkay/expressad/d/a;->b(Ljava/lang/String;)Lcom/tkay/expressad/d/a;

    move-result-object p0

    .line 39
    sput-object p0, Lcom/tkay/expressad/d/b;->f:Lcom/tkay/expressad/d/a;

    if-eqz p0, :cond_0

    .line 40
    invoke-virtual {p0}, Lcom/tkay/expressad/d/a;->G()V

    :cond_0
    return-void
.end method

.method private static g(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 1

    .line 129
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 130
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p0

    .line 132
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x0

    .line 134
    sget-object v0, Lcom/tkay/expressad/d/b;->e:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 135
    sget-object p1, Lcom/tkay/expressad/d/b;->e:Ljava/util/HashMap;

    invoke-virtual {p1, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    move-object p1, p0

    check-cast p1, Lcom/tkay/expressad/d/c;

    :cond_1
    return-object p1
.end method
