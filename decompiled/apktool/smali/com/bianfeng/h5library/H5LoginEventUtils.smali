.class Lcom/bianfeng/h5library/H5LoginEventUtils;
.super Ljava/lang/Object;
.source "H5LoginEventUtils.java"


# instance fields
.field private appEventsBean:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;

.field private baseRequestBean:Lcom/bianfeng/h5library/H5LoginEvent;

.field private uniqueId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    new-instance v6, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;

    move-object v0, v6

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v5}, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v6, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->appEventsBean:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;

    .line 13
    invoke-virtual {v6}, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/h5library/utils/H5libMd5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->uniqueId:Ljava/lang/String;

    .line 14
    iget-object p2, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->appEventsBean:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;

    invoke-virtual {p2, p1}, Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;->setUniqueId(Ljava/lang/String;)V

    .line 15
    new-instance p1, Lcom/bianfeng/h5library/H5LoginEvent;

    iget-object p2, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->appEventsBean:Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;

    invoke-direct {p1, p6, p2}, Lcom/bianfeng/h5library/H5LoginEvent;-><init>(Ljava/lang/String;Lcom/bianfeng/h5library/H5LoginEvent$AppEventsBean;)V

    iput-object p1, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->baseRequestBean:Lcom/bianfeng/h5library/H5LoginEvent;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/bianfeng/h5library/H5LoginEventUtils;->baseRequestBean:Lcom/bianfeng/h5library/H5LoginEvent;

    invoke-virtual {v0}, Lcom/bianfeng/h5library/H5LoginEvent;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
