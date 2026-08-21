.class public final Lcom/bykv/vk/openvk/downloadnew/pp;
.super Lcom/bykv/vk/openvk/downloadnew/rg;

# interfaces
.implements Lcom/bykv/vk/openvk/api/proto/Bridge;


# static fields
.field private static volatile rg:Lcom/bykv/vk/openvk/downloadnew/pp;


# instance fields
.field private final df:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 82
    invoke-direct {p0}, Lcom/bykv/vk/openvk/downloadnew/rg;-><init>()V

    .line 83
    iput-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    return-void
.end method

.method private c(Ljava/lang/Object;)Lcom/ss/android/download/api/config/OnItemClickListener;
    .locals 1

    .line 297
    instance-of v0, p1, Lcom/ss/android/download/api/config/OnItemClickListener;

    if-eqz v0, :cond_0

    .line 298
    check-cast p1, Lcom/ss/android/download/api/config/OnItemClickListener;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private df(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadModel;
    .locals 1

    .line 262
    instance-of v0, p1, Lcom/ss/android/download/api/download/DownloadModel;

    if-eqz v0, :cond_0

    .line 263
    check-cast p1, Lcom/ss/android/download/api/download/DownloadModel;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private fw(Ljava/lang/Object;)Lcom/ss/android/download/api/config/IDownloadButtonClickListener;
    .locals 1

    .line 304
    instance-of v0, p1, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    if-eqz v0, :cond_0

    .line 305
    check-cast p1, Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private getActivity(Ljava/lang/Object;)Landroid/app/Activity;
    .locals 1

    .line 283
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 284
    check-cast p1, Landroid/app/Activity;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private pp(Ljava/lang/Object;)Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;
    .locals 1

    .line 290
    instance-of v0, p1, Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;

    if-eqz v0, :cond_0

    .line 291
    check-cast p1, Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private pt(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadController;
    .locals 1

    .line 276
    instance-of v0, p1, Lcom/ss/android/download/api/download/DownloadController;

    if-eqz v0, :cond_0

    .line 277
    check-cast p1, Lcom/ss/android/download/api/download/DownloadController;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private q(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadEventConfig;
    .locals 1

    .line 269
    instance-of v0, p1, Lcom/ss/android/download/api/download/DownloadEventConfig;

    if-eqz v0, :cond_0

    .line 270
    check-cast p1, Lcom/ss/android/download/api/download/DownloadEventConfig;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public static rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/downloadnew/pp;
    .locals 2

    .line 87
    sget-object v0, Lcom/bykv/vk/openvk/downloadnew/pp;->rg:Lcom/bykv/vk/openvk/downloadnew/pp;

    if-nez v0, :cond_1

    .line 88
    const-class v0, Lcom/bykv/vk/openvk/downloadnew/pp;

    monitor-enter v0

    .line 89
    :try_start_0
    sget-object v1, Lcom/bykv/vk/openvk/downloadnew/pp;->rg:Lcom/bykv/vk/openvk/downloadnew/pp;

    if-nez v1, :cond_0

    .line 90
    new-instance v1, Lcom/bykv/vk/openvk/downloadnew/pp;

    invoke-direct {v1, p0}, Lcom/bykv/vk/openvk/downloadnew/pp;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/bykv/vk/openvk/downloadnew/pp;->rg:Lcom/bykv/vk/openvk/downloadnew/pp;

    .line 92
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 94
    :cond_1
    :goto_0
    sget-object p0, Lcom/bykv/vk/openvk/downloadnew/pp;->rg:Lcom/bykv/vk/openvk/downloadnew/pp;

    return-object p0
.end method

.method private rg(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadStatusChangeListener;
    .locals 1

    .line 255
    instance-of v0, p1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    if-eqz v0, :cond_0

    .line 256
    check-cast p1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private static rg(Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method


# virtual methods
.method public call(ILcom/bykv/vk/openvk/api/proto/ValueSet;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(I",
            "Lcom/bykv/vk/openvk/api/proto/ValueSet;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    const/4 v0, 0x0

    const/16 v1, 0x14

    if-ne p1, v1, :cond_0

    .line 322
    const-class p1, Landroid/os/Bundle;

    invoke-interface {p2, v0, p1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Bundle;

    invoke-virtual {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/pp;->init(Landroid/os/Bundle;)V

    const/4 p1, 0x0

    return-object p1

    .line 325
    :cond_0
    const-class v1, Ljava/util/Map;

    invoke-interface {p2, v0, v1}, Lcom/bykv/vk/openvk/api/proto/ValueSet;->objectValue(ILjava/lang/Class;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map;

    invoke-virtual {p0, p3, p1, p2}, Lcom/bykv/vk/openvk/downloadnew/pp;->callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 23
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p3

    const-string v2, "action_type_button"

    const-string v3, "uri"

    const-string v4, "downloadStatusChangeListener"

    const-string v5, "downloadButtonClickListener"

    const-string v6, "downloadModel"

    const-string v7, "downloadController"

    const-string v8, "downloadEventConfig"

    const-string v9, "hashCode"

    const-string v10, "downloadUrl"

    const-string v11, "id"

    const/4 v12, 0x0

    packed-switch p2, :pswitch_data_0

    .line 218
    :pswitch_0
    invoke-super/range {p0 .. p3}, Lcom/bykv/vk/openvk/downloadnew/rg;->callMethod(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;

    move-result-object v1

    return-object v1

    .line 172
    :pswitch_1
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    .line 173
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v3

    invoke-interface {v3, v1, v2}, Lcom/ss/android/downloadad/api/df;->rg(J)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 168
    :pswitch_2
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    .line 169
    invoke-interface {v1, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 170
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v4

    invoke-virtual {v4}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v4

    invoke-interface {v4, v2, v3, v1}, Lcom/ss/android/downloadad/api/df;->rg(JI)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 143
    :pswitch_3
    invoke-interface {v1, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    move-object v14, v3

    check-cast v14, Ljava/lang/String;

    .line 144
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v15

    .line 145
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v17

    .line 146
    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->q(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v18

    .line 147
    invoke-interface {v1, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->pt(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v19

    const-string v2, "itemClickListener"

    .line 148
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->c(Ljava/lang/Object;)Lcom/ss/android/download/api/config/OnItemClickListener;

    move-result-object v20

    .line 149
    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->fw(Ljava/lang/Object;)Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    move-result-object v21

    .line 150
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v13

    invoke-virtual/range {v13 .. v21}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/OnItemClickListener;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)V

    return-object v12

    .line 135
    :pswitch_4
    invoke-interface {v1, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    move-object v14, v3

    check-cast v14, Ljava/lang/String;

    .line 136
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v15

    .line 137
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v17

    .line 138
    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->q(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v18

    .line 139
    invoke-interface {v1, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->pt(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v19

    .line 140
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v13

    invoke-virtual/range {v13 .. v19}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;JILcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)V

    return-object v12

    .line 215
    :pswitch_5
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/Uri;

    .line 216
    invoke-static {v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/net/Uri;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 163
    :pswitch_6
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v12

    const-string v2, "logExtra"

    .line 164
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v14, v2

    check-cast v14, Ljava/lang/String;

    .line 165
    invoke-interface {v1, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v16

    .line 166
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v10

    iget-object v11, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    const/4 v15, 0x0

    invoke-interface/range {v10 .. v16}, Lcom/ss/android/downloadad/api/df;->rg(Landroid/content/Context;JLjava/lang/String;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;I)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 175
    :pswitch_7
    invoke-interface {v1, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v21

    const-string v2, "isDisableDialog"

    .line 176
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v16

    const-string v2, "userAgent"

    .line 177
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v15, v2

    check-cast v15, Ljava/lang/String;

    .line 178
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->df(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v17

    .line 179
    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->q(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v18

    .line 180
    invoke-interface {v1, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->pt(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v19

    .line 182
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->rg(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    move-result-object v20

    .line 184
    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->fw(Ljava/lang/Object;)Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    move-result-object v22

    .line 185
    invoke-static/range {v22 .. v22}, Lcom/bykv/vk/openvk/downloadnew/pp;->rg(Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 186
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v13

    iget-object v14, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-interface/range {v13 .. v22}, Lcom/ss/android/downloadad/api/df;->rg(Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;ILcom/ss/android/download/api/config/IDownloadButtonClickListener;)Landroid/app/Dialog;

    return-object v12

    .line 191
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/ux;->pp()Lcom/ss/android/downloadad/api/df;

    move-result-object v13

    iget-object v14, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-interface/range {v13 .. v21}, Lcom/ss/android/downloadad/api/df;->rg(Landroid/content/Context;Ljava/lang/String;ZLcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadStatusChangeListener;I)Landroid/app/Dialog;

    return-object v12

    .line 197
    :pswitch_8
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v10, v2

    check-cast v10, Landroid/net/Uri;

    .line 198
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->df(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v11

    .line 199
    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->q(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadEventConfig;

    move-result-object v12

    .line 200
    invoke-interface {v1, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->pt(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadController;

    move-result-object v13

    .line 201
    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->fw(Ljava/lang/Object;)Lcom/ss/android/download/api/config/IDownloadButtonClickListener;

    move-result-object v14

    .line 202
    invoke-static {v14}, Lcom/bykv/vk/openvk/downloadnew/pp;->rg(Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 203
    iget-object v9, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-static/range {v9 .. v14}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/config/IDownloadButtonClickListener;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 205
    :cond_1
    iget-object v1, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-static {v1, v10, v11, v12, v13}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;Landroid/net/Uri;Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadEventConfig;Lcom/ss/android/download/api/download/DownloadController;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    :pswitch_9
    const-string v2, "downloadPath"

    .line 211
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 212
    invoke-static {v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Ljava/lang/String;)V

    return-object v12

    .line 158
    :pswitch_a
    invoke-interface {v1, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const-string v3, "onEventLogHandler"

    .line 159
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;

    .line 160
    invoke-static {v2, v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(ILcom/bykv/vk/openvk/downloadnew/core/ITTDownloadAdapter$OnEventLogHandler;)V

    return-object v12

    .line 153
    :pswitch_b
    invoke-interface {v1, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "force"

    .line 154
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 155
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v3

    invoke-virtual {v3, v2, v1}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;Z)V

    return-object v12

    .line 208
    :pswitch_c
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->df()V

    return-object v12

    .line 132
    :pswitch_d
    invoke-interface {v1, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 133
    iget-object v2, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-static {v2, v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    .line 126
    :pswitch_e
    invoke-interface {v1, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 127
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-direct {v0, v3}, Lcom/bykv/vk/openvk/downloadnew/pp;->df(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadModel;

    move-result-object v3

    .line 128
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->rg(Ljava/lang/Object;)Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    move-result-object v1

    .line 129
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v4

    iget-object v5, v0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-virtual {v4, v5, v2, v1, v3}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;ILcom/ss/android/download/api/download/DownloadStatusChangeListener;Lcom/ss/android/download/api/download/DownloadModel;)V

    return-object v12

    .line 121
    :pswitch_f
    invoke-interface {v1, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 122
    invoke-interface {v1, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 123
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v3

    invoke-virtual {v3, v2, v1}, Lcom/ss/android/downloadlib/ux;->rg(Ljava/lang/String;I)V

    return-object v12

    :pswitch_10
    const-string v2, "hid"

    .line 117
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 118
    invoke-static {v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(I)V

    return-object v12

    :pswitch_11
    :try_start_0
    const-string v2, "tagIntercept"

    .line 109
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, "label"

    .line 110
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    const-string v4, "meta"

    .line 111
    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 112
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-static {v2, v3, v4, v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/Object;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 114
    :catch_0
    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    return-object v1

    .line 106
    :pswitch_12
    invoke-static {}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg()Lcom/ss/android/downloadlib/ux;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/downloadlib/ux;->c()Ljava/lang/String;

    move-result-object v1

    return-object v1

    :pswitch_13
    const-string v2, "activity"

    .line 102
    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/bykv/vk/openvk/downloadnew/pp;->getActivity(Ljava/lang/Object;)Landroid/app/Activity;

    move-result-object v2

    const-string v3, "exitInstallListener"

    .line 103
    invoke-interface {v1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/downloadnew/pp;->pp(Ljava/lang/Object;)Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;

    move-result-object v1

    .line 104
    invoke-static {v2, v1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    return-object v1

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method public getObj(Ljava/lang/Class;ILjava/util/Map;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)TT;"
        }
    .end annotation

    if-eqz p2, :cond_1

    const/4 p3, 0x1

    if-eq p2, p3, :cond_0

    .line 245
    invoke-super {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/rg;->getObj(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    .line 242
    :cond_0
    sget-boolean p1, Lcom/bykv/vk/openvk/downloadnew/pt;->df:Z

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1

    .line 240
    :cond_1
    sget-object p1, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;

    return-object p1
.end method

.method public init(Landroid/os/Bundle;)V
    .locals 0

    .line 250
    invoke-super {p0, p1}, Lcom/bykv/vk/openvk/downloadnew/rg;->init(Landroid/os/Bundle;)V

    .line 251
    iget-object p1, p0, Lcom/bykv/vk/openvk/downloadnew/pp;->df:Landroid/content/Context;

    invoke-static {p1}, Lcom/bykv/vk/openvk/downloadnew/pt;->rg(Landroid/content/Context;)V

    return-void
.end method

.method public values()Lcom/bykv/vk/openvk/api/proto/ValueSet;
    .locals 3

    .line 313
    invoke-static {}, Lcom/bykv/vk/openvk/api/q;->rg()Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    sget-object v1, Lcom/bykv/vk/openvk/downloadnew/pt;->rg:Ljava/lang/String;

    const/4 v2, 0x0

    .line 314
    invoke-virtual {v0, v2, v1}, Lcom/bykv/vk/openvk/api/q;->rg(ILjava/lang/String;)Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    sget-boolean v1, Lcom/bykv/vk/openvk/downloadnew/pt;->df:Z

    .line 315
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/bykv/vk/openvk/api/q;->rg(ILjava/lang/Object;)Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    .line 316
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/api/q;->df()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object v0

    return-object v0
.end method
