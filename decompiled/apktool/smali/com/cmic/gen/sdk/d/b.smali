.class public Lcom/cmic/gen/sdk/d/b;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "LogBean.java"


# instance fields
.field private A:Ljava/lang/String;

.field public a:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/lang/Throwable;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:Ljava/lang/String;

.field private o:Lorg/json/JSONArray;

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:Ljava/lang/String;

.field private u:Ljava/lang/String;

.field private v:Ljava/lang/String;

.field private w:Ljava/lang/String;

.field private x:Ljava/lang/String;

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 18
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    const/4 v0, 0x0

    .line 24
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->b:Ljava/lang/String;

    .line 25
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->c:Ljava/lang/String;

    .line 26
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->d:Ljava/lang/String;

    .line 27
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->e:Ljava/lang/String;

    .line 28
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->f:Ljava/lang/String;

    .line 29
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->g:Ljava/lang/String;

    .line 30
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->h:Ljava/lang/String;

    .line 31
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->i:Ljava/lang/String;

    .line 32
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->j:Ljava/lang/String;

    const-string v1, ""

    .line 33
    iput-object v1, p0, Lcom/cmic/gen/sdk/d/b;->k:Ljava/lang/String;

    .line 34
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->l:Ljava/lang/String;

    .line 35
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->m:Ljava/lang/String;

    .line 36
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->n:Ljava/lang/String;

    .line 38
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->p:Ljava/lang/String;

    .line 39
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->q:Ljava/lang/String;

    .line 40
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->r:Ljava/lang/String;

    .line 41
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->s:Ljava/lang/String;

    .line 42
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->t:Ljava/lang/String;

    .line 43
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->u:Ljava/lang/String;

    .line 44
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->v:Ljava/lang/String;

    .line 45
    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->w:Ljava/lang/String;

    .line 67
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/cmic/gen/sdk/d/b;->a:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-void
.end method


# virtual methods
.method public A(Ljava/lang/String;)V
    .locals 0

    .line 159
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->A:Ljava/lang/String;

    return-void
.end method

.method public a()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method a(Lorg/json/JSONArray;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->o:Lorg/json/JSONArray;

    return-void
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 3

    .line 163
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "appid"

    .line 165
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "traceId"

    .line 166
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appName"

    .line 167
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "appVersion"

    .line 168
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "quick_login_android_5.9.6"

    const-string v2, "sdkVersion"

    .line 170
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "clientType"

    const-string v2, "android"

    .line 171
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "timeOut"

    .line 172
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "requestTime"

    .line 173
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "responseTime"

    .line 174
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "elapsedTime"

    .line 175
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "requestType"

    .line 176
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "interfaceType"

    .line 177
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "interfaceCode"

    .line 178
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->l:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "interfaceElasped"

    .line 179
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "loginType"

    .line 180
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "exceptionStackTrace"

    .line 181
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->o:Lorg/json/JSONArray;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "operatorType"

    .line 182
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "networkType"

    .line 183
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->q:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "brand"

    .line 184
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "reqDevice"

    .line 185
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->s:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "reqSystem"

    .line 186
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->t:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "simCardNum"

    .line 187
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "imsiState"

    .line 188
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->v:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "resultCode"

    .line 189
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->w:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "AID"

    .line 190
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->x:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sysOperType"

    .line 191
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scripType"

    .line 192
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->z:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 193
    iget-object v1, p0, Lcom/cmic/gen/sdk/d/b;->A:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "networkTypeByAPI"

    .line 194
    iget-object v2, p0, Lcom/cmic/gen/sdk/d/b;->A:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 197
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->b:Ljava/lang/String;

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->v:Ljava/lang/String;

    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->w:Ljava/lang/String;

    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->r:Ljava/lang/String;

    return-void
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->m:Ljava/lang/String;

    return-void
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->l:Ljava/lang/String;

    return-void
.end method

.method public h(Ljava/lang/String;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->k:Ljava/lang/String;

    return-void
.end method

.method public i(Ljava/lang/String;)V
    .locals 0

    .line 83
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->d:Ljava/lang/String;

    return-void
.end method

.method public j(Ljava/lang/String;)V
    .locals 0

    .line 87
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->e:Ljava/lang/String;

    return-void
.end method

.method public k(Ljava/lang/String;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->f:Ljava/lang/String;

    return-void
.end method

.method public l(Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->i:Ljava/lang/String;

    return-void
.end method

.method m(Ljava/lang/String;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->u:Ljava/lang/String;

    return-void
.end method

.method n(Ljava/lang/String;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->p:Ljava/lang/String;

    return-void
.end method

.method o(Ljava/lang/String;)V
    .locals 0

    .line 110
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->s:Ljava/lang/String;

    return-void
.end method

.method p(Ljava/lang/String;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->t:Ljava/lang/String;

    return-void
.end method

.method public q(Ljava/lang/String;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->n:Ljava/lang/String;

    return-void
.end method

.method r(Ljava/lang/String;)V
    .locals 0

    .line 122
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->c:Ljava/lang/String;

    return-void
.end method

.method public s(Ljava/lang/String;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->g:Ljava/lang/String;

    return-void
.end method

.method public t(Ljava/lang/String;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->h:Ljava/lang/String;

    return-void
.end method

.method public u(Ljava/lang/String;)V
    .locals 0

    .line 134
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->j:Ljava/lang/String;

    return-void
.end method

.method w(Ljava/lang/String;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->q:Ljava/lang/String;

    return-void
.end method

.method public x(Ljava/lang/String;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->x:Ljava/lang/String;

    return-void
.end method

.method public y(Ljava/lang/String;)V
    .locals 0

    .line 151
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->y:Ljava/lang/String;

    return-void
.end method

.method public z(Ljava/lang/String;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/cmic/gen/sdk/d/b;->z:Ljava/lang/String;

    return-void
.end method
