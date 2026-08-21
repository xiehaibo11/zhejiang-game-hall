.class final Lcom/tkay/expressad/video/dynview/j/a$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/i/c/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/j/a;->a(Ljava/lang/String;Landroid/content/Context;Landroid/view/View;ILjava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/widget/TextView;

.field final synthetic b:Ljava/util/Map;

.field final synthetic c:Lcom/tkay/expressad/video/dynview/j/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/j/a;Landroid/widget/TextView;Ljava/util/Map;)V
    .locals 0

    .line 489
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->c:Lcom/tkay/expressad/video/dynview/j/a;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->a:Landroid/widget/TextView;

    iput-object p3, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->b:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 502
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->c:Lcom/tkay/expressad/video/dynview/j/a;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->b:Ljava/util/Map;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;Ljava/util/Map;)V

    return-void
.end method

.method public final a(J)V
    .locals 4

    .line 492
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->c:Lcom/tkay/expressad/video/dynview/j/a;

    const-wide/16 v1, 0x3e8

    div-long/2addr p1, v1

    long-to-int p1, p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;I)I

    .line 493
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->c:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/j/a;->c(Lcom/tkay/expressad/video/dynview/j/a;)I

    move-result p1

    int-to-long p1, p1

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->a:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 1094
    invoke-static {v0}, Lcom/tkay/core/common/l/d;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "zh"

    .line 1104
    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_6

    const-string v2, "ja"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_0

    :cond_0
    const-string v0, "de"

    .line 1107
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1108
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Automatische Wiedergabe nach "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " Sekunden"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_1

    :cond_1
    const-string v0, "ko"

    .line 1109
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1110
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " \ucd08 \ud6c4 \uc790\ub3d9 \uc7ac\uc0dd "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_1

    :cond_2
    const-string v0, "fr"

    .line 1111
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1112
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Lecture de vid\u00e9o dans "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " secondes"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_3
    const-string v0, "ar"

    .line 1113
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1114
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, " \u062b\u0648\u0627\u0646"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, "\u0644\u0639\u0628 \u062a\u0644\u0642\u0627\u0626\u064a\u0627 \u0628\u0639\u062f "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_4
    const-string v0, "ru"

    .line 1115
    invoke-virtual {v1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 1116
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u0410\u0432\u0442\u043e\u0432\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0434\u0435\u043d\u0438\u0435 \u0447\u0435\u0440\u0435\u0437 "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " \u0441\u0435\u043a\u0443\u043d\u0434"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    .line 1118
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Auto play after "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " s"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_6
    :goto_0
    const-string v1, "tkay_cm_video_auto_play_after"

    const-string v2, "string"

    .line 1105
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 1106
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 494
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->a:Landroid/widget/TextView;

    invoke-virtual {p2, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 496
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$6;->c:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/j/a;->g(Lcom/tkay/expressad/video/dynview/j/a;)J

    move-result-wide v0

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;J)J

    return-void
.end method
