.class public Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;
.super Ljava/lang/Object;
.source "SDKAuthorityController.java"


# static fields
.field private static volatile c:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a; = null

.field private static f:Z = true


# instance fields
.field public a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public b:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/CallBackForDeveloper;

.field private d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

.field private e:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 10

    const-string v0, "authority_other"

    const-string v1, "authority_oaid_id"

    const-string v2, "authority_app_download"

    const-string v3, "authority_applist"

    const-string v4, "authority_serial_id"

    const-string v5, "authority_device_id"

    const-string v6, "authority_general_data"

    const-string v7, ""

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 45
    new-instance v8, Ljava/util/ArrayList;

    invoke-direct {v8}, Ljava/util/ArrayList;-><init>()V

    iput-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    const/4 v8, 0x3

    .line 68
    iput v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    .line 1094
    new-instance v8, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-direct {v8}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;-><init>()V

    iput-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1096
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v6}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    const/4 v9, 0x1

    if-eqz v8, :cond_0

    .line 1097
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->b(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1099
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v5}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_1

    .line 1100
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->c(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1102
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v4}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 1103
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->d(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1105
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v3}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_3

    .line 1106
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->f(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1108
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v2}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_4

    .line 1109
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->g(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1111
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_5

    .line 1112
    iget-object v8, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v8, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->e(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1115
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v8

    invoke-virtual {v8, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_6

    .line 1116
    iget-object v7, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {v7, v9}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->h(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    .line 1119
    :cond_6
    iget-object v7, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v7, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1120
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v6, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1121
    iget-object v5, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v5, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1122
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1123
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v2, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1124
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1125
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1127
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;
    .locals 2

    .line 80
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    if-nez v0, :cond_1

    .line 81
    const-class v0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    monitor-enter v0

    .line 82
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    if-nez v1, :cond_0

    .line 83
    new-instance v1, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    .line 85
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 87
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    return-object v0
.end method

.method public static a(Z)V
    .locals 0

    .line 437
    sput-boolean p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->f:Z

    return-void
.end method

.method private c(Ljava/lang/String;)I
    .locals 2

    const/4 v0, 0x0

    .line 180
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 181
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 182
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return v0

    :catch_0
    move-exception p1

    .line 185
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "SDKAuthorityController"

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return v0
.end method

.method private d(Ljava/lang/String;)I
    .locals 3

    .line 199
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 201
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    :cond_0
    const/4 v1, -0x1

    const-string v2, "authority_general_data"

    .line 204
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 205
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->F()I

    move-result v1

    goto :goto_0

    :cond_1
    const-string v2, "authority_device_id"

    .line 206
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 207
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->G()I

    move-result v1

    goto :goto_0

    :cond_2
    const-string v2, "authority_applist"

    .line 208
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 209
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->M()I

    move-result v1

    goto :goto_0

    :cond_3
    const-string v2, "authority_app_download"

    .line 210
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 211
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->R()I

    move-result v1

    goto :goto_0

    :cond_4
    const-string v2, "authority_serial_id"

    .line 212
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 213
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->E()I

    move-result v1

    goto :goto_0

    :cond_5
    const-string v2, "authority_oaid_id"

    .line 214
    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 215
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->G()I

    move-result v1

    :cond_6
    :goto_0
    return v1
.end method

.method public static h()Z
    .locals 1

    .line 433
    sget-boolean v0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->f:Z

    return v0
.end method


# virtual methods
.method public final a(I)V
    .locals 1

    .line 396
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    .line 1429
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    if-eqz v0, :cond_7

    const-string v0, "authority_general_data"

    .line 139
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 140
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->b(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_0
    const-string v0, "authority_device_id"

    .line 141
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 142
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->c(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_1
    const-string v0, "authority_applist"

    .line 143
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 144
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->f(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_2
    const-string v0, "authority_app_download"

    .line 145
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 146
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->g(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_3
    const-string v0, "authority_all_info"

    .line 147
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 148
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->a(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_4
    const-string v0, "authority_serial_id"

    .line 149
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 150
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->d(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_5
    const-string v0, "authority_oaid_id"

    .line 151
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 152
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->e(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    goto :goto_0

    :cond_6
    const-string v0, "authority_other"

    .line 153
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_7

    .line 154
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->h(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    :cond_7
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 7

    .line 273
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_0

    .line 276
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    move v3, v2

    goto :goto_0

    :cond_0
    move v3, v1

    .line 278
    :goto_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->H()I

    move-result v4

    if-nez v4, :cond_1

    .line 280
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c(Ljava/lang/String;)I

    move-result v4

    if-ne v4, v2, :cond_2

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d(Ljava/lang/String;)I

    move-result v4

    if-ne v4, v2, :cond_2

    :goto_1
    move v4, v2

    goto :goto_2

    :cond_1
    if-ne v4, v2, :cond_2

    .line 282
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d(Ljava/lang/String;)I

    move-result v4

    if-ne v4, v2, :cond_2

    goto :goto_1

    :cond_2
    move v4, v1

    :goto_2
    const-string v5, "authority_applist"

    .line 286
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_3

    const-string v5, "authority_app_download"

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_5

    .line 287
    :cond_3
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d(Ljava/lang/String;)I

    move-result v4

    if-eqz v4, :cond_4

    move v4, v2

    goto :goto_3

    :cond_4
    move v4, v1

    :cond_5
    :goto_3
    const-string v5, "authority_other"

    .line 291
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_7

    .line 292
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c(Ljava/lang/String;)I

    move-result v4

    if-ne v4, v2, :cond_6

    move v4, v2

    goto :goto_4

    :cond_6
    move v4, v1

    :cond_7
    :goto_4
    const-string v5, "authority_device_id"

    .line 296
    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_b

    .line 297
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v5

    .line 1425
    iget v5, v5, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    const/4 v6, 0x2

    if-ne v5, v6, :cond_b

    .line 299
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aT()Z

    move-result v4

    if-eqz v4, :cond_8

    goto :goto_5

    :cond_8
    if-eqz v3, :cond_9

    goto :goto_5

    .line 305
    :cond_9
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c(Ljava/lang/String;)I

    move-result v3

    if-ne v3, v2, :cond_a

    move v1, v2

    :cond_a
    :goto_5
    move v4, v1

    :cond_b
    const-string v1, "authority_imei_mac"

    .line 312
    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_c

    const-string v1, "authority_imsi_id"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_c

    const-string v1, "authority_android_id"

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_d

    .line 313
    :cond_c
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aT()Z

    move-result p1

    xor-int/lit8 v4, p1, 0x1

    :cond_d
    return v4
.end method

.method public final b()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;
    .locals 2

    .line 166
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    if-eqz v0, :cond_0

    return-object v0

    .line 169
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;-><init>()V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;->a(I)Lcom/mbridge/msdk/foundation/controller/authoritycontroller/AuthorityInfoBean;

    move-result-object v0

    return-object v0
.end method

.method public final b(I)V
    .locals 2

    .line 409
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    const-string v1, "authority_dnt"

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;I)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 345
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 346
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "authority_consent_status"

    .line 347
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 348
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 349
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    if-ne p1, v1, :cond_0

    move p1, v1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 350
    :goto_0
    iput p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    .line 353
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->b:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/CallBackForDeveloper;

    if-eqz p1, :cond_3

    .line 354
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->b:Lcom/mbridge/msdk/foundation/controller/authoritycontroller/CallBackForDeveloper;

    iget v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    if-ne v0, v1, :cond_2

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    invoke-interface {p1, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/CallBackForDeveloper;->onAuthorityCallback(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 358
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "SDKAuthorityController"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 4

    .line 326
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 328
    :try_start_0
    iget v1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_1

    iget v1, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    const/4 v3, 0x3

    if-ne v1, v3, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :cond_1
    :goto_0
    const-string v1, "authority_consent_status"

    .line 329
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 330
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 332
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    const-string v0, ""

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 5

    .line 366
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    .line 367
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 368
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "keyname"

    .line 370
    iget-object v4, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "client_status"

    .line 371
    iget-object v4, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-direct {p0, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->c(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "server_status"

    .line 372
    iget-object v4, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-direct {p0, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->d(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 373
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v2

    .line 375
    invoke-virtual {v2}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 378
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final e()Z
    .locals 3

    .line 405
    iget v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :cond_1
    :goto_0
    return v1
.end method

.method public final f()I
    .locals 3

    .line 421
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    const-string v1, "authority_coppa"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method public final g()I
    .locals 1

    .line 425
    iget v0, p0, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->e:I

    return v0
.end method
