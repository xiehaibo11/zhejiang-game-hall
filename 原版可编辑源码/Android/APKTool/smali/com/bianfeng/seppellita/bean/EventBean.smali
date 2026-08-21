.class public Lcom/bianfeng/seppellita/bean/EventBean;
.super Ljava/lang/Object;
.source "EventBean.java"


# instance fields
.field private aaid:Ljava/lang/String;

.field private ab:Ljava/lang/String;

.field private abd:Ljava/lang/String;

.field private ac:Ljava/lang/String;

.field private act:Ljava/lang/String;

.field private an:Ljava/lang/String;

.field private andid:Ljava/lang/String;

.field private av:Ljava/lang/String;

.field private bi:Ljava/lang/String;

.field private bl:Ljava/lang/String;

.field private blk:Ljava/lang/String;

.field private cust:Ljava/lang/String;

.field private did:Ljava/lang/String;

.field private dname:Ljava/lang/String;

.field private dur:I

.field private eid:Ljava/lang/String;

.field private et:J

.field private ext:Ljava/lang/String;

.field private ind:Ljava/lang/String;

.field private isp:Ljava/lang/String;

.field private itemid:Ljava/lang/String;

.field private label:Ljava/lang/String;

.field private mfrs:Ljava/lang/String;

.field private model:Ljava/lang/String;

.field private net:Ljava/lang/String;

.field private oaid:Ljava/lang/String;

.field private os:Ljava/lang/String;

.field private osv:Ljava/lang/String;

.field private pg:Ljava/lang/String;

.field private pi:Ljava/lang/String;

.field private pkg:Ljava/lang/String;

.field private pl:Ljava/lang/String;

.field private ppg:Ljava/lang/String;

.field private ppi:Ljava/lang/String;

.field private ppl:Ljava/lang/String;

.field private rv:Ljava/lang/String;

.field private sort:Ljava/lang/String;

.field private ssid:Ljava/lang/String;

.field private st:Ljava/lang/String;

.field private uid:Ljava/lang/String;

.field private vaid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/bean/DeviceBean;Lcom/bianfeng/seppellita/bean/AppInfoBean;)V
    .locals 1

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 68
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getSite()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->st:Ljava/lang/String;

    .line 69
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_name()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->an:Ljava/lang/String;

    .line 70
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_package()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->pkg:Ljava/lang/String;

    .line 71
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_build()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->abd:Ljava/lang/String;

    .line 72
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_version()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->av:Ljava/lang/String;

    .line 73
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getApp_channel()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ac:Ljava/lang/String;

    .line 74
    invoke-virtual {p2}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->getIs_New_Device()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ind:Ljava/lang/String;

    .line 76
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getNetwork()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->net:Ljava/lang/String;

    .line 77
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getOs()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->os:Ljava/lang/String;

    .line 78
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getOs_version()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->osv:Ljava/lang/String;

    .line 79
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getDevice_name()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->dname:Ljava/lang/String;

    .line 80
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getIsp()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->isp:Ljava/lang/String;

    .line 81
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getAndroid_id()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->andid:Ljava/lang/String;

    .line 82
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getDevice_id()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->did:Ljava/lang/String;

    .line 83
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getManufacturer()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->mfrs:Ljava/lang/String;

    .line 84
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getSession_id()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ssid:Ljava/lang/String;

    .line 85
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getModel()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->model:Ljava/lang/String;

    .line 88
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getOaid()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->oaid:Ljava/lang/String;

    .line 89
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getAaid()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/EventBean;->aaid:Ljava/lang/String;

    .line 90
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/DeviceBean;->getVaid()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/EventBean;->vaid:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getSize()I
    .locals 1

    .line 141
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/bean/EventBean;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    array-length v0, v0

    return v0
.end method

.method public getSt()Ljava/lang/String;
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->st:Ljava/lang/String;

    return-object v0
.end method

.method public setEvent(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "act"

    .line 95
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->act:Ljava/lang/String;

    const-string v0, "pg"

    .line 96
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->pg:Ljava/lang/String;

    const-string v0, "pi"

    .line 97
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->pi:Ljava/lang/String;

    const-string v0, "pl"

    .line 98
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->pl:Ljava/lang/String;

    const-string v0, "blk"

    .line 99
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->blk:Ljava/lang/String;

    const-string v0, "bi"

    .line 101
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->bi:Ljava/lang/String;

    const-string v0, "bl"

    .line 102
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->bl:Ljava/lang/String;

    const-string v0, "itemid"

    .line 103
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->itemid:Ljava/lang/String;

    const-string v0, "label"

    .line 104
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->label:Ljava/lang/String;

    const-string v0, "sort"

    .line 105
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->sort:Ljava/lang/String;

    const-string v0, "eid"

    .line 107
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->eid:Ljava/lang/String;

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "dur"

    .line 109
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-static {v1}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 110
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 111
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, p0, Lcom/bianfeng/seppellita/bean/EventBean;->dur:I

    goto :goto_0

    .line 113
    :cond_0
    iput v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->dur:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 116
    :catch_0
    iput v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->dur:I

    :goto_0
    const-string v0, "ext"

    .line 118
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ext:Ljava/lang/String;

    const-string v0, "cust"

    .line 119
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->cust:Ljava/lang/String;

    const-string v0, "uid"

    .line 120
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->uid:Ljava/lang/String;

    :try_start_1
    const-string v0, "et"

    .line 122
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->et:J
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 124
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 125
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->et:J

    :goto_1
    const-string v0, "rv"

    .line 127
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->rv:Ljava/lang/String;

    const-string v0, "ab"

    .line 128
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ab:Ljava/lang/String;

    const-string v0, "ppg"

    .line 129
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ppg:Ljava/lang/String;

    const-string v0, "ppi"

    .line 130
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ppi:Ljava/lang/String;

    const-string v0, "ppl"

    .line 131
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/StringUtils;->trim(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/EventBean;->ppl:Ljava/lang/String;

    return-void
.end method

.method public setSt(Ljava/lang/String;)V
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/EventBean;->st:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 136
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
