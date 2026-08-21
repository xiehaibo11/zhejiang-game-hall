package kotlin.ranges;

@kotlin.Metadata(d1 = {"\u0000n\n\u0002\b\u0002\n\u0002\u0010\u000f\n\u0002\b\u0002\n\u0002\u0010\u0005\n\u0002\u0010\u0006\n\u0002\u0010\u0007\n\u0002\u0010\b\n\u0002\u0010\t\n\u0002\u0010\n\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\f\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001d\u001a'\u0010\u0000\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002*\u0002H\u00012\u0006\u0010\u0003\u001a\u0002H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0012\u0010\u0000\u001a\u00020\u0005*\u00020\u00052\u0006\u0010\u0003\u001a\u00020\u0005\u001a\u0012\u0010\u0000\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u0003\u001a\u00020\u0006\u001a\u0012\u0010\u0000\u001a\u00020\u0007*\u00020\u00072\u0006\u0010\u0003\u001a\u00020\u0007\u001a\u0012\u0010\u0000\u001a\u00020\b*\u00020\b2\u0006\u0010\u0003\u001a\u00020\b\u001a\u0012\u0010\u0000\u001a\u00020\t*\u00020\t2\u0006\u0010\u0003\u001a\u00020\t\u001a\u0012\u0010\u0000\u001a\u00020\n*\u00020\n2\u0006\u0010\u0003\u001a\u00020\n\u001a'\u0010\u000b\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002*\u0002H\u00012\u0006\u0010\f\u001a\u0002H\u0001¢\u0006\u0002\u0010\u0004\u001a\u0012\u0010\u000b\u001a\u00020\u0005*\u00020\u00052\u0006\u0010\f\u001a\u00020\u0005\u001a\u0012\u0010\u000b\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006\u001a\u0012\u0010\u000b\u001a\u00020\u0007*\u00020\u00072\u0006\u0010\f\u001a\u00020\u0007\u001a\u0012\u0010\u000b\u001a\u00020\b*\u00020\b2\u0006\u0010\f\u001a\u00020\b\u001a\u0012\u0010\u000b\u001a\u00020\t*\u00020\t2\u0006\u0010\f\u001a\u00020\t\u001a\u0012\u0010\u000b\u001a\u00020\n*\u00020\n2\u0006\u0010\f\u001a\u00020\n\u001a3\u0010\r\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002*\u0002H\u00012\b\u0010\u0003\u001a\u0004\u0018\u0001H\u00012\b\u0010\f\u001a\u0004\u0018\u0001H\u0001¢\u0006\u0002\u0010\u000e\u001a/\u0010\r\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002*\u0002H\u00012\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u0002H\u00010\u0010H\u0007¢\u0006\u0002\u0010\u0011\u001a-\u0010\r\u001a\u0002H\u0001\"\u000e\b\u0000\u0010\u0001*\b\u0012\u0004\u0012\u0002H\u00010\u0002*\u0002H\u00012\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u0002H\u00010\u0012¢\u0006\u0002\u0010\u0013\u001a\u001a\u0010\r\u001a\u00020\u0005*\u00020\u00052\u0006\u0010\u0003\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\u0005\u001a\u001a\u0010\r\u001a\u00020\u0006*\u00020\u00062\u0006\u0010\u0003\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\u0006\u001a\u001a\u0010\r\u001a\u00020\u0007*\u00020\u00072\u0006\u0010\u0003\u001a\u00020\u00072\u0006\u0010\f\u001a\u00020\u0007\u001a\u001a\u0010\r\u001a\u00020\b*\u00020\b2\u0006\u0010\u0003\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\b\u001a\u0018\u0010\r\u001a\u00020\b*\u00020\b2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\b0\u0012\u001a\u001a\u0010\r\u001a\u00020\t*\u00020\t2\u0006\u0010\u0003\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\t\u001a\u0018\u0010\r\u001a\u00020\t*\u00020\t2\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\t0\u0012\u001a\u001a\u0010\r\u001a\u00020\n*\u00020\n2\u0006\u0010\u0003\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n\u001a\u001c\u0010\u0014\u001a\u00020\u0015*\u00020\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018H\u0087\n¢\u0006\u0002\u0010\u0019\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00050\u00122\u0006\u0010\u001a\u001a\u00020\u0006H\u0087\u0002¢\u0006\u0002\b\u001b\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00050\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0087\u0002¢\u0006\u0002\b\u001b\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00050\u00122\u0006\u0010\u001a\u001a\u00020\bH\u0087\u0002¢\u0006\u0002\b\u001b\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00050\u00122\u0006\u0010\u001a\u001a\u00020\tH\u0087\u0002¢\u0006\u0002\b\u001b\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00050\u00122\u0006\u0010\u001a\u001a\u00020\nH\u0087\u0002¢\u0006\u0002\b\u001b\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00060\u00122\u0006\u0010\u001a\u001a\u00020\u0005H\u0087\u0002¢\u0006\u0002\b\u001c\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00060\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0087\u0002¢\u0006\u0002\b\u001c\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00060\u00122\u0006\u0010\u001a\u001a\u00020\bH\u0087\u0002¢\u0006\u0002\b\u001c\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00060\u00122\u0006\u0010\u001a\u001a\u00020\tH\u0087\u0002¢\u0006\u0002\b\u001c\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00060\u00122\u0006\u0010\u001a\u001a\u00020\nH\u0087\u0002¢\u0006\u0002\b\u001c\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00070\u00122\u0006\u0010\u001a\u001a\u00020\u0005H\u0087\u0002¢\u0006\u0002\b\u001d\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00070\u00122\u0006\u0010\u001a\u001a\u00020\u0006H\u0087\u0002¢\u0006\u0002\b\u001d\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00070\u00122\u0006\u0010\u001a\u001a\u00020\bH\u0087\u0002¢\u0006\u0002\b\u001d\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00070\u00122\u0006\u0010\u001a\u001a\u00020\tH\u0087\u0002¢\u0006\u0002\b\u001d\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\u00070\u00122\u0006\u0010\u001a\u001a\u00020\nH\u0087\u0002¢\u0006\u0002\b\u001d\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\b0\u00122\u0006\u0010\u001a\u001a\u00020\u0005H\u0087\u0002¢\u0006\u0002\b\u001e\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\b0\u00122\u0006\u0010\u001a\u001a\u00020\u0006H\u0087\u0002¢\u0006\u0002\b\u001e\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\b0\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0087\u0002¢\u0006\u0002\b\u001e\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\b0\u00122\u0006\u0010\u001a\u001a\u00020\tH\u0087\u0002¢\u0006\u0002\b\u001e\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\b0\u00122\u0006\u0010\u001a\u001a\u00020\nH\u0087\u0002¢\u0006\u0002\b\u001e\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\t0\u00122\u0006\u0010\u001a\u001a\u00020\u0005H\u0087\u0002¢\u0006\u0002\b\u001f\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\t0\u00122\u0006\u0010\u001a\u001a\u00020\u0006H\u0087\u0002¢\u0006\u0002\b\u001f\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\t0\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0087\u0002¢\u0006\u0002\b\u001f\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\t0\u00122\u0006\u0010\u001a\u001a\u00020\bH\u0087\u0002¢\u0006\u0002\b\u001f\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\t0\u00122\u0006\u0010\u001a\u001a\u00020\nH\u0087\u0002¢\u0006\u0002\b\u001f\u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\n0\u00122\u0006\u0010\u001a\u001a\u00020\u0005H\u0087\u0002¢\u0006\u0002\b \u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\n0\u00122\u0006\u0010\u001a\u001a\u00020\u0006H\u0087\u0002¢\u0006\u0002\b \u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\n0\u00122\u0006\u0010\u001a\u001a\u00020\u0007H\u0087\u0002¢\u0006\u0002\b \u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\n0\u00122\u0006\u0010\u001a\u001a\u00020\bH\u0087\u0002¢\u0006\u0002\b \u001a \u0010\u0014\u001a\u00020\u0015*\b\u0012\u0004\u0012\u00020\n0\u00122\u0006\u0010\u001a\u001a\u00020\tH\u0087\u0002¢\u0006\u0002\b \u001a\u001c\u0010\u0014\u001a\u00020\u0015*\u00020!2\b\u0010\u0017\u001a\u0004\u0018\u00010\bH\u0087\n¢\u0006\u0002\u0010\"\u001a\u001c\u0010\u0014\u001a\u00020\u0015*\u00020#2\b\u0010\u0017\u001a\u0004\u0018\u00010\tH\u0087\n¢\u0006\u0002\u0010$\u001a\u0015\u0010%\u001a\u00020&*\u00020\u00052\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\u00052\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\u00052\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\u00052\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020)*\u00020\u00182\u0006\u0010'\u001a\u00020\u0018H\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\b2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\b2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\b2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\b2\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\t2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\t2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\t2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\t2\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\n2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\n2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020(*\u00020\n2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010%\u001a\u00020&*\u00020\n2\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\r\u0010*\u001a\u00020\u0018*\u00020\u0016H\u0087\b\u001a\u0014\u0010*\u001a\u00020\u0018*\u00020\u00162\u0006\u0010*\u001a\u00020+H\u0007\u001a\r\u0010*\u001a\u00020\b*\u00020!H\u0087\b\u001a\u0014\u0010*\u001a\u00020\b*\u00020!2\u0006\u0010*\u001a\u00020+H\u0007\u001a\r\u0010*\u001a\u00020\t*\u00020#H\u0087\b\u001a\u0014\u0010*\u001a\u00020\t*\u00020#2\u0006\u0010*\u001a\u00020+H\u0007\u001a\u0014\u0010,\u001a\u0004\u0018\u00010\u0018*\u00020\u0016H\u0087\b¢\u0006\u0002\u0010-\u001a\u001b\u0010,\u001a\u0004\u0018\u00010\u0018*\u00020\u00162\u0006\u0010*\u001a\u00020+H\u0007¢\u0006\u0002\u0010.\u001a\u0014\u0010,\u001a\u0004\u0018\u00010\b*\u00020!H\u0087\b¢\u0006\u0002\u0010/\u001a\u001b\u0010,\u001a\u0004\u0018\u00010\b*\u00020!2\u0006\u0010*\u001a\u00020+H\u0007¢\u0006\u0002\u00100\u001a\u0014\u0010,\u001a\u0004\u0018\u00010\t*\u00020#H\u0087\b¢\u0006\u0002\u00101\u001a\u001b\u0010,\u001a\u0004\u0018\u00010\t*\u00020#2\u0006\u0010*\u001a\u00020+H\u0007¢\u0006\u0002\u00102\u001a\n\u00103\u001a\u00020)*\u00020)\u001a\n\u00103\u001a\u00020&*\u00020&\u001a\n\u00103\u001a\u00020(*\u00020(\u001a\u0015\u00104\u001a\u00020)*\u00020)2\u0006\u00104\u001a\u00020\bH\u0086\u0004\u001a\u0015\u00104\u001a\u00020&*\u00020&2\u0006\u00104\u001a\u00020\bH\u0086\u0004\u001a\u0015\u00104\u001a\u00020(*\u00020(2\u0006\u00104\u001a\u00020\tH\u0086\u0004\u001a\u0013\u00105\u001a\u0004\u0018\u00010\u0005*\u00020\u0006H\u0000¢\u0006\u0002\u00106\u001a\u0013\u00105\u001a\u0004\u0018\u00010\u0005*\u00020\u0007H\u0000¢\u0006\u0002\u00107\u001a\u0013\u00105\u001a\u0004\u0018\u00010\u0005*\u00020\bH\u0000¢\u0006\u0002\u00108\u001a\u0013\u00105\u001a\u0004\u0018\u00010\u0005*\u00020\tH\u0000¢\u0006\u0002\u00109\u001a\u0013\u00105\u001a\u0004\u0018\u00010\u0005*\u00020\nH\u0000¢\u0006\u0002\u0010:\u001a\u0013\u0010;\u001a\u0004\u0018\u00010\b*\u00020\u0006H\u0000¢\u0006\u0002\u0010<\u001a\u0013\u0010;\u001a\u0004\u0018\u00010\b*\u00020\u0007H\u0000¢\u0006\u0002\u0010=\u001a\u0013\u0010;\u001a\u0004\u0018\u00010\b*\u00020\tH\u0000¢\u0006\u0002\u0010>\u001a\u0013\u0010?\u001a\u0004\u0018\u00010\t*\u00020\u0006H\u0000¢\u0006\u0002\u0010@\u001a\u0013\u0010?\u001a\u0004\u0018\u00010\t*\u00020\u0007H\u0000¢\u0006\u0002\u0010A\u001a\u0013\u0010B\u001a\u0004\u0018\u00010\n*\u00020\u0006H\u0000¢\u0006\u0002\u0010C\u001a\u0013\u0010B\u001a\u0004\u0018\u00010\n*\u00020\u0007H\u0000¢\u0006\u0002\u0010D\u001a\u0013\u0010B\u001a\u0004\u0018\u00010\n*\u00020\bH\u0000¢\u0006\u0002\u0010E\u001a\u0013\u0010B\u001a\u0004\u0018\u00010\n*\u00020\tH\u0000¢\u0006\u0002\u0010F\u001a\u0015\u0010G\u001a\u00020!*\u00020\u00052\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\u00052\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\u00052\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\u00052\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020\u0016*\u00020\u00182\u0006\u0010'\u001a\u00020\u0018H\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\b2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\b2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\b2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\b2\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\t2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\t2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\t2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\t2\u0006\u0010'\u001a\u00020\nH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\n2\u0006\u0010'\u001a\u00020\u0005H\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\n2\u0006\u0010'\u001a\u00020\bH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020#*\u00020\n2\u0006\u0010'\u001a\u00020\tH\u0086\u0004\u001a\u0015\u0010G\u001a\u00020!*\u00020\n2\u0006\u0010'\u001a\u00020\nH\u0086\u0004¨\u0006H"}, d2 = {"coerceAtLeast", "T", "", "minimumValue", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "", "", "", "", "", "", "coerceAtMost", "maximumValue", "coerceIn", "(Ljava/lang/Comparable;Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljava/lang/Comparable;", "range", "Lkotlin/ranges/ClosedFloatingPointRange;", "(Ljava/lang/Comparable;Lkotlin/ranges/ClosedFloatingPointRange;)Ljava/lang/Comparable;", "Lkotlin/ranges/ClosedRange;", "(Ljava/lang/Comparable;Lkotlin/ranges/ClosedRange;)Ljava/lang/Comparable;", "contains", "", "Lkotlin/ranges/CharRange;", "element", "", "(Lkotlin/ranges/CharRange;Ljava/lang/Character;)Z", "value", "byteRangeContains", "doubleRangeContains", "floatRangeContains", "intRangeContains", "longRangeContains", "shortRangeContains", "Lkotlin/ranges/IntRange;", "(Lkotlin/ranges/IntRange;Ljava/lang/Integer;)Z", "Lkotlin/ranges/LongRange;", "(Lkotlin/ranges/LongRange;Ljava/lang/Long;)Z", "downTo", "Lkotlin/ranges/IntProgression;", "to", "Lkotlin/ranges/LongProgression;", "Lkotlin/ranges/CharProgression;", "random", "Lkotlin/random/Random;", "randomOrNull", "(Lkotlin/ranges/CharRange;)Ljava/lang/Character;", "(Lkotlin/ranges/CharRange;Lkotlin/random/Random;)Ljava/lang/Character;", "(Lkotlin/ranges/IntRange;)Ljava/lang/Integer;", "(Lkotlin/ranges/IntRange;Lkotlin/random/Random;)Ljava/lang/Integer;", "(Lkotlin/ranges/LongRange;)Ljava/lang/Long;", "(Lkotlin/ranges/LongRange;Lkotlin/random/Random;)Ljava/lang/Long;", "reversed", "step", "toByteExactOrNull", "(D)Ljava/lang/Byte;", "(F)Ljava/lang/Byte;", "(I)Ljava/lang/Byte;", "(J)Ljava/lang/Byte;", "(S)Ljava/lang/Byte;", "toIntExactOrNull", "(D)Ljava/lang/Integer;", "(F)Ljava/lang/Integer;", "(J)Ljava/lang/Integer;", "toLongExactOrNull", "(D)Ljava/lang/Long;", "(F)Ljava/lang/Long;", "toShortExactOrNull", "(D)Ljava/lang/Short;", "(F)Ljava/lang/Short;", "(I)Ljava/lang/Short;", "(J)Ljava/lang/Short;", "until", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/ranges/RangesKt")
class RangesKt___RangesKt extends kotlin.ranges.RangesKt__RangesKt {
    public RangesKt___RangesKt() {
            r0 = this;
            r0.<init>()
            return
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean byteRangeContains(kotlin.ranges.ClosedRange r1, double r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Byte r2 = kotlin.ranges.RangesKt.toByteExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean byteRangeContains(kotlin.ranges.ClosedRange r1, float r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Byte r2 = kotlin.ranges.RangesKt.toByteExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean byteRangeContains(kotlin.ranges.ClosedRange<java.lang.Byte> r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Byte r2 = kotlin.ranges.RangesKt.toByteExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean byteRangeContains(kotlin.ranges.ClosedRange<java.lang.Byte> r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Byte r2 = kotlin.ranges.RangesKt.toByteExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean byteRangeContains(kotlin.ranges.ClosedRange<java.lang.Byte> r1, short r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Byte r2 = kotlin.ranges.RangesKt.toByteExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final byte coerceAtLeast(byte r0, byte r1) {
            if (r0 >= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final double coerceAtLeast(double r1, double r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L5
            r1 = r3
        L5:
            return r1
    }

    public static final float coerceAtLeast(float r1, float r2) {
            int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r0 >= 0) goto L5
            r1 = r2
        L5:
            return r1
    }

    public static final int coerceAtLeast(int r0, int r1) {
            if (r0 >= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final long coerceAtLeast(long r1, long r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L5
            r1 = r3
        L5:
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T coerceAtLeast(T r1, T r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "minimumValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.compareTo(r2)
            if (r0 >= 0) goto L11
            r1 = r2
        L11:
            return r1
    }

    public static final short coerceAtLeast(short r0, short r1) {
            if (r0 >= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final byte coerceAtMost(byte r0, byte r1) {
            if (r0 <= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final double coerceAtMost(double r1, double r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L5
            r1 = r3
        L5:
            return r1
    }

    public static final float coerceAtMost(float r1, float r2) {
            int r0 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r0 <= 0) goto L5
            r1 = r2
        L5:
            return r1
    }

    public static final int coerceAtMost(int r0, int r1) {
            if (r0 <= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final long coerceAtMost(long r1, long r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L5
            r1 = r3
        L5:
            return r1
    }

    public static final <T extends java.lang.Comparable<? super T>> T coerceAtMost(T r1, T r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "maximumValue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.compareTo(r2)
            if (r0 <= 0) goto L11
            r1 = r2
        L11:
            return r1
    }

    public static final short coerceAtMost(short r0, short r1) {
            if (r0 <= r1) goto L3
            r0 = r1
        L3:
            return r0
    }

    public static final byte coerceIn(byte r2, byte r3, byte r4) {
            if (r3 > r4) goto L9
            if (r2 >= r3) goto L5
            return r3
        L5:
            if (r2 <= r4) goto L8
            return r4
        L8:
            return r2
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: maximum "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is less than minimum "
            r0.append(r4)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final double coerceIn(double r1, double r3, double r5) {
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto Lf
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L9
            return r3
        L9:
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 <= 0) goto Le
            return r5
        Le:
            return r1
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Cannot coerce value to an empty range: maximum "
            r2.append(r0)
            r2.append(r5)
            java.lang.String r5 = " is less than minimum "
            r2.append(r5)
            r2.append(r3)
            r3 = 46
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public static final float coerceIn(float r2, float r3, float r4) {
            int r0 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r0 > 0) goto Lf
            int r0 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r0 >= 0) goto L9
            return r3
        L9:
            int r3 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r3 <= 0) goto Le
            return r4
        Le:
            return r2
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: maximum "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is less than minimum "
            r0.append(r4)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final int coerceIn(int r2, int r3, int r4) {
            if (r3 > r4) goto L9
            if (r2 >= r3) goto L5
            return r3
        L5:
            if (r2 <= r4) goto L8
            return r4
        L8:
            return r2
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: maximum "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is less than minimum "
            r0.append(r4)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final int coerceIn(int r2, kotlin.ranges.ClosedRange<java.lang.Integer> r3) {
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3 instanceof kotlin.ranges.ClosedFloatingPointRange
            if (r0 == 0) goto L1c
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            kotlin.ranges.ClosedFloatingPointRange r3 = (kotlin.ranges.ClosedFloatingPointRange) r3
            java.lang.Comparable r2 = kotlin.ranges.RangesKt.coerceIn(r2, r3)
            java.lang.Number r2 = (java.lang.Number) r2
            int r2 = r2.intValue()
            return r2
        L1c:
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L50
            java.lang.Comparable r0 = r3.getStart()
            java.lang.Number r0 = (java.lang.Number) r0
            int r0 = r0.intValue()
            if (r2 >= r0) goto L39
            java.lang.Comparable r2 = r3.getStart()
            java.lang.Number r2 = (java.lang.Number) r2
            int r2 = r2.intValue()
            goto L4f
        L39:
            java.lang.Comparable r0 = r3.getEndInclusive()
            java.lang.Number r0 = (java.lang.Number) r0
            int r0 = r0.intValue()
            if (r2 <= r0) goto L4f
            java.lang.Comparable r2 = r3.getEndInclusive()
            java.lang.Number r2 = (java.lang.Number) r2
            int r2 = r2.intValue()
        L4f:
            return r2
        L50:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: "
            r0.append(r1)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final long coerceIn(long r1, long r3, long r5) {
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto Lf
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 >= 0) goto L9
            return r3
        L9:
            int r3 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r3 <= 0) goto Le
            return r5
        Le:
            return r1
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Cannot coerce value to an empty range: maximum "
            r2.append(r0)
            r2.append(r5)
            java.lang.String r5 = " is less than minimum "
            r2.append(r5)
            r2.append(r3)
            r3 = 46
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public static final long coerceIn(long r2, kotlin.ranges.ClosedRange<java.lang.Long> r4) {
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r4 instanceof kotlin.ranges.ClosedFloatingPointRange
            if (r0 == 0) goto L1c
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            kotlin.ranges.ClosedFloatingPointRange r4 = (kotlin.ranges.ClosedFloatingPointRange) r4
            java.lang.Comparable r2 = kotlin.ranges.RangesKt.coerceIn(r2, r4)
            java.lang.Number r2 = (java.lang.Number) r2
            long r2 = r2.longValue()
            return r2
        L1c:
            boolean r0 = r4.isEmpty()
            if (r0 != 0) goto L54
            java.lang.Comparable r0 = r4.getStart()
            java.lang.Number r0 = (java.lang.Number) r0
            long r0 = r0.longValue()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L3b
            java.lang.Comparable r2 = r4.getStart()
            java.lang.Number r2 = (java.lang.Number) r2
            long r2 = r2.longValue()
            goto L53
        L3b:
            java.lang.Comparable r0 = r4.getEndInclusive()
            java.lang.Number r0 = (java.lang.Number) r0
            long r0 = r0.longValue()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L53
            java.lang.Comparable r2 = r4.getEndInclusive()
            java.lang.Number r2 = (java.lang.Number) r2
            long r2 = r2.longValue()
        L53:
            return r2
        L54:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Cannot coerce value to an empty range: "
            r3.append(r0)
            r3.append(r4)
            r4 = 46
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final <T extends java.lang.Comparable<? super T>> T coerceIn(T r2, T r3, T r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            if (r3 == 0) goto L41
            if (r4 == 0) goto L41
            int r0 = r3.compareTo(r4)
            if (r0 > 0) goto L1d
            int r0 = r2.compareTo(r3)
            if (r0 >= 0) goto L16
            return r3
        L16:
            int r3 = r2.compareTo(r4)
            if (r3 <= 0) goto L53
            return r4
        L1d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: maximum "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is less than minimum "
            r0.append(r4)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
        L41:
            if (r3 == 0) goto L4a
            int r0 = r2.compareTo(r3)
            if (r0 >= 0) goto L4a
            return r3
        L4a:
            if (r4 == 0) goto L53
            int r3 = r2.compareTo(r4)
            if (r3 <= 0) goto L53
            return r4
        L53:
            return r2
    }

    public static final <T extends java.lang.Comparable<? super T>> T coerceIn(T r2, kotlin.ranges.ClosedFloatingPointRange<T> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L42
            java.lang.Comparable r0 = r3.getStart()
            boolean r0 = r3.lessThanOrEquals(r2, r0)
            if (r0 == 0) goto L29
            java.lang.Comparable r0 = r3.getStart()
            boolean r0 = r3.lessThanOrEquals(r0, r2)
            if (r0 != 0) goto L29
            java.lang.Comparable r2 = r3.getStart()
            goto L41
        L29:
            java.lang.Comparable r0 = r3.getEndInclusive()
            boolean r0 = r3.lessThanOrEquals(r0, r2)
            if (r0 == 0) goto L41
            java.lang.Comparable r0 = r3.getEndInclusive()
            boolean r0 = r3.lessThanOrEquals(r2, r0)
            if (r0 != 0) goto L41
            java.lang.Comparable r2 = r3.getEndInclusive()
        L41:
            return r2
        L42:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: "
            r0.append(r1)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final <T extends java.lang.Comparable<? super T>> T coerceIn(T r2, kotlin.ranges.ClosedRange<T> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "range"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3 instanceof kotlin.ranges.ClosedFloatingPointRange
            if (r0 == 0) goto L15
            kotlin.ranges.ClosedFloatingPointRange r3 = (kotlin.ranges.ClosedFloatingPointRange) r3
            java.lang.Comparable r2 = kotlin.ranges.RangesKt.coerceIn(r2, r3)
            return r2
        L15:
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L39
            java.lang.Comparable r0 = r3.getStart()
            int r0 = r2.compareTo(r0)
            if (r0 >= 0) goto L2a
            java.lang.Comparable r2 = r3.getStart()
            goto L38
        L2a:
            java.lang.Comparable r0 = r3.getEndInclusive()
            int r0 = r2.compareTo(r0)
            if (r0 <= 0) goto L38
            java.lang.Comparable r2 = r3.getEndInclusive()
        L38:
            return r2
        L39:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: "
            r0.append(r1)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static final short coerceIn(short r2, short r3, short r4) {
            if (r3 > r4) goto L9
            if (r2 >= r3) goto L5
            return r3
        L5:
            if (r2 <= r4) goto L8
            return r4
        L8:
            return r2
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cannot coerce value to an empty range: maximum "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " is less than minimum "
            r0.append(r4)
            r0.append(r3)
            r3 = 46
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    private static final boolean contains(kotlin.ranges.CharRange r1, java.lang.Character r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            if (r2 == 0) goto L13
            char r2 = r2.charValue()
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }

    private static final boolean contains(kotlin.ranges.IntRange r1, java.lang.Integer r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            if (r2 == 0) goto L13
            int r2 = r2.intValue()
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L13
            r1 = 1
            goto L14
        L13:
            r1 = 0
        L14:
            return r1
    }

    private static final boolean contains(kotlin.ranges.LongRange r2, java.lang.Long r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            if (r3 == 0) goto L13
            long r0 = r3.longValue()
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto L13
            r2 = 1
            goto L14
        L13:
            r2 = 0
        L14:
            return r2
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean doubleRangeContains(kotlin.ranges.ClosedRange r2, byte r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            double r0 = (double) r3
            java.lang.Double r3 = java.lang.Double.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    public static final boolean doubleRangeContains(kotlin.ranges.ClosedRange<java.lang.Double> r2, float r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            double r0 = (double) r3
            java.lang.Double r3 = java.lang.Double.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean doubleRangeContains(kotlin.ranges.ClosedRange r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            double r0 = (double) r3
            java.lang.Double r3 = java.lang.Double.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean doubleRangeContains(kotlin.ranges.ClosedRange r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            double r2 = (double) r2
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean doubleRangeContains(kotlin.ranges.ClosedRange r2, short r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            double r0 = (double) r3
            java.lang.Double r3 = java.lang.Double.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    public static final kotlin.ranges.CharProgression downTo(char r2, char r3) {
            kotlin.ranges.CharProgression$Companion r0 = kotlin.ranges.CharProgression.Companion
            r1 = -1
            kotlin.ranges.CharProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(byte r2, byte r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(byte r2, int r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(byte r2, short r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(int r2, byte r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(int r2, int r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(int r2, short r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(short r2, byte r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(short r2, int r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.IntProgression downTo(short r2, short r3) {
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            r1 = -1
            kotlin.ranges.IntProgression r2 = r0.fromClosedRange(r2, r3, r1)
            return r2
    }

    public static final kotlin.ranges.LongProgression downTo(byte r7, long r8) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r1 = (long) r7
            r5 = -1
            r3 = r8
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(int r7, long r8) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r1 = (long) r7
            r5 = -1
            r3 = r8
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(long r7, byte r9) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r3 = (long) r9
            r5 = -1
            r1 = r7
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(long r7, int r9) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r3 = (long) r9
            r5 = -1
            r1 = r7
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(long r7, long r9) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            r5 = -1
            r1 = r7
            r3 = r9
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(long r7, short r9) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r3 = (long) r9
            r5 = -1
            r1 = r7
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    public static final kotlin.ranges.LongProgression downTo(short r7, long r8) {
            kotlin.ranges.LongProgression$Companion r0 = kotlin.ranges.LongProgression.Companion
            long r1 = (long) r7
            r5 = -1
            r3 = r8
            kotlin.ranges.LongProgression r7 = r0.fromClosedRange(r1, r3, r5)
            return r7
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean floatRangeContains(kotlin.ranges.ClosedRange r1, byte r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            float r2 = (float) r2
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    public static final boolean floatRangeContains(kotlin.ranges.ClosedRange<java.lang.Float> r1, double r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            float r2 = (float) r2
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean floatRangeContains(kotlin.ranges.ClosedRange r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            float r2 = (float) r2
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean floatRangeContains(kotlin.ranges.ClosedRange r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            float r2 = (float) r2
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean floatRangeContains(kotlin.ranges.ClosedRange r1, short r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            float r2 = (float) r2
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    public static final boolean intRangeContains(kotlin.ranges.ClosedRange<java.lang.Integer> r1, byte r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean intRangeContains(kotlin.ranges.ClosedRange r1, double r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Integer r2 = kotlin.ranges.RangesKt.toIntExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean intRangeContains(kotlin.ranges.ClosedRange r1, float r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Integer r2 = kotlin.ranges.RangesKt.toIntExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean intRangeContains(kotlin.ranges.ClosedRange<java.lang.Integer> r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Integer r2 = kotlin.ranges.RangesKt.toIntExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean intRangeContains(kotlin.ranges.ClosedRange<java.lang.Integer> r1, short r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    public static final boolean longRangeContains(kotlin.ranges.ClosedRange<java.lang.Long> r2, byte r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = (long) r3
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean longRangeContains(kotlin.ranges.ClosedRange r1, double r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Long r2 = kotlin.ranges.RangesKt.toLongExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean longRangeContains(kotlin.ranges.ClosedRange r1, float r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Long r2 = kotlin.ranges.RangesKt.toLongExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean longRangeContains(kotlin.ranges.ClosedRange<java.lang.Long> r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = (long) r3
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    public static final boolean longRangeContains(kotlin.ranges.ClosedRange<java.lang.Long> r2, short r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r0 = (long) r3
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            java.lang.Comparable r3 = (java.lang.Comparable) r3
            boolean r2 = r2.contains(r3)
            return r2
    }

    private static final char random(kotlin.ranges.CharRange r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            char r1 = kotlin.ranges.RangesKt.random(r1, r0)
            return r1
    }

    public static final char random(kotlin.ranges.CharRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            char r0 = r1.getFirst()     // Catch: java.lang.IllegalArgumentException -> L1a
            char r1 = r1.getLast()     // Catch: java.lang.IllegalArgumentException -> L1a
            int r1 = r1 + 1
            int r1 = r2.nextInt(r0, r1)     // Catch: java.lang.IllegalArgumentException -> L1a
            char r1 = (char) r1
            return r1
        L1a:
            r1 = move-exception
            java.util.NoSuchElementException r2 = new java.util.NoSuchElementException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    private static final int random(kotlin.ranges.IntRange r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            int r1 = kotlin.ranges.RangesKt.random(r1, r0)
            return r1
    }

    public static final int random(kotlin.ranges.IntRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r1 = kotlin.random.RandomKt.nextInt(r2, r1)     // Catch: java.lang.IllegalArgumentException -> Lf
            return r1
        Lf:
            r1 = move-exception
            java.util.NoSuchElementException r2 = new java.util.NoSuchElementException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    private static final long random(kotlin.ranges.LongRange r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            long r0 = kotlin.ranges.RangesKt.random(r2, r0)
            return r0
    }

    public static final long random(kotlin.ranges.LongRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            long r1 = kotlin.random.RandomKt.nextLong(r2, r1)     // Catch: java.lang.IllegalArgumentException -> Lf
            return r1
        Lf:
            r1 = move-exception
            java.util.NoSuchElementException r2 = new java.util.NoSuchElementException
            java.lang.String r1 = r1.getMessage()
            r2.<init>(r1)
            throw r2
    }

    private static final java.lang.Character randomOrNull(kotlin.ranges.CharRange r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            java.lang.Character r1 = kotlin.ranges.RangesKt.randomOrNull(r1, r0)
            return r1
    }

    public static final java.lang.Character randomOrNull(kotlin.ranges.CharRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L12
            r1 = 0
            return r1
        L12:
            char r0 = r1.getFirst()
            char r1 = r1.getLast()
            int r1 = r1 + 1
            int r1 = r2.nextInt(r0, r1)
            char r1 = (char) r1
            java.lang.Character r1 = java.lang.Character.valueOf(r1)
            return r1
    }

    private static final java.lang.Integer randomOrNull(kotlin.ranges.IntRange r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            java.lang.Integer r1 = kotlin.ranges.RangesKt.randomOrNull(r1, r0)
            return r1
    }

    public static final java.lang.Integer randomOrNull(kotlin.ranges.IntRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L12
            r1 = 0
            return r1
        L12:
            int r1 = kotlin.random.RandomKt.nextInt(r2, r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            return r1
    }

    private static final java.lang.Long randomOrNull(kotlin.ranges.LongRange r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.random.Random$Default r0 = kotlin.random.Random.Default
            kotlin.random.Random r0 = (kotlin.random.Random) r0
            java.lang.Long r1 = kotlin.ranges.RangesKt.randomOrNull(r1, r0)
            return r1
    }

    public static final java.lang.Long randomOrNull(kotlin.ranges.LongRange r1, kotlin.random.Random r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L12
            r1 = 0
            return r1
        L12:
            long r1 = kotlin.random.RandomKt.nextLong(r2, r1)
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            return r1
    }

    public static final kotlin.ranges.CharProgression reversed(kotlin.ranges.CharProgression r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.ranges.CharProgression$Companion r0 = kotlin.ranges.CharProgression.Companion
            char r1 = r3.getLast()
            char r2 = r3.getFirst()
            int r3 = r3.getStep()
            int r3 = -r3
            kotlin.ranges.CharProgression r3 = r0.fromClosedRange(r1, r2, r3)
            return r3
    }

    public static final kotlin.ranges.IntProgression reversed(kotlin.ranges.IntProgression r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            int r1 = r3.getLast()
            int r2 = r3.getFirst()
            int r3 = r3.getStep()
            int r3 = -r3
            kotlin.ranges.IntProgression r3 = r0.fromClosedRange(r1, r2, r3)
            return r3
    }

    public static final kotlin.ranges.LongProgression reversed(kotlin.ranges.LongProgression r8) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            kotlin.ranges.LongProgression$Companion r1 = kotlin.ranges.LongProgression.Companion
            long r2 = r8.getLast()
            long r4 = r8.getFirst()
            long r6 = r8.getStep()
            long r6 = -r6
            kotlin.ranges.LongProgression r8 = r1.fromClosedRange(r2, r4, r6)
            return r8
    }

    public static final boolean shortRangeContains(kotlin.ranges.ClosedRange<java.lang.Short> r1, byte r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            short r2 = (short) r2
            java.lang.Short r2 = java.lang.Short.valueOf(r2)
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean shortRangeContains(kotlin.ranges.ClosedRange r1, double r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Short r2 = kotlin.ranges.RangesKt.toShortExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    @kotlin.Deprecated(message = "This `contains` operation mixing integer and floating point arguments has ambiguous semantics and is going to be removed.")
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.4", hiddenSince = "1.5", warningSince = "1.3")
    public static final boolean shortRangeContains(kotlin.ranges.ClosedRange r1, float r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Short r2 = kotlin.ranges.RangesKt.toShortExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean shortRangeContains(kotlin.ranges.ClosedRange<java.lang.Short> r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Short r2 = kotlin.ranges.RangesKt.toShortExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final boolean shortRangeContains(kotlin.ranges.ClosedRange<java.lang.Short> r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Short r2 = kotlin.ranges.RangesKt.toShortExactOrNull(r2)
            if (r2 == 0) goto L12
            java.lang.Comparable r2 = (java.lang.Comparable) r2
            boolean r1 = r1.contains(r2)
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final kotlin.ranges.CharProgression step(kotlin.ranges.CharProgression r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            if (r4 <= 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.Number r1 = (java.lang.Number) r1
            kotlin.ranges.RangesKt.checkStepIsPositive(r0, r1)
            kotlin.ranges.CharProgression$Companion r0 = kotlin.ranges.CharProgression.Companion
            char r1 = r3.getFirst()
            char r2 = r3.getLast()
            int r3 = r3.getStep()
            if (r3 <= 0) goto L24
            goto L25
        L24:
            int r4 = -r4
        L25:
            kotlin.ranges.CharProgression r3 = r0.fromClosedRange(r1, r2, r4)
            return r3
    }

    public static final kotlin.ranges.IntProgression step(kotlin.ranges.IntProgression r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            if (r4 <= 0) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.Number r1 = (java.lang.Number) r1
            kotlin.ranges.RangesKt.checkStepIsPositive(r0, r1)
            kotlin.ranges.IntProgression$Companion r0 = kotlin.ranges.IntProgression.Companion
            int r1 = r3.getFirst()
            int r2 = r3.getLast()
            int r3 = r3.getStep()
            if (r3 <= 0) goto L24
            goto L25
        L24:
            int r4 = -r4
        L25:
            kotlin.ranges.IntProgression r3 = r0.fromClosedRange(r1, r2, r4)
            return r3
    }

    public static final kotlin.ranges.LongProgression step(kotlin.ranges.LongProgression r11, long r12) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 <= 0) goto Ld
            r2 = 1
            goto Le
        Ld:
            r2 = 0
        Le:
            java.lang.Long r3 = java.lang.Long.valueOf(r12)
            java.lang.Number r3 = (java.lang.Number) r3
            kotlin.ranges.RangesKt.checkStepIsPositive(r2, r3)
            kotlin.ranges.LongProgression$Companion r4 = kotlin.ranges.LongProgression.Companion
            long r5 = r11.getFirst()
            long r7 = r11.getLast()
            long r2 = r11.getStep()
            int r11 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r11 <= 0) goto L2a
            goto L2b
        L2a:
            long r12 = -r12
        L2b:
            r9 = r12
            kotlin.ranges.LongProgression r11 = r4.fromClosedRange(r5, r7, r9)
            return r11
    }

    public static final java.lang.Byte toByteExactOrNull(double r4) {
            r0 = 4638637247447433216(0x405fc00000000000, double:127.0)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L11
            r2 = -4584664420663164928(0xc060000000000000, double:-128.0)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1
        L11:
            if (r1 == 0) goto L1a
            int r4 = (int) r4
            byte r4 = (byte) r4
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            goto L1b
        L1a:
            r4 = 0
        L1b:
            return r4
    }

    public static final java.lang.Byte toByteExactOrNull(float r2) {
            r0 = 1123942400(0x42fe0000, float:127.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r0 = -1023410176(0xffffffffc3000000, float:-128.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L17
            int r2 = (int) r2
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            goto L18
        L17:
            r2 = 0
        L18:
            return r2
    }

    public static final java.lang.Byte toByteExactOrNull(int r2) {
            r0 = 0
            r1 = 127(0x7f, float:1.78E-43)
            if (r2 > r1) goto La
            r1 = -128(0xffffffffffffff80, float:NaN)
            if (r1 > r2) goto La
            r0 = 1
        La:
            if (r0 == 0) goto L12
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public static final java.lang.Byte toByteExactOrNull(long r4) {
            r0 = 127(0x7f, double:6.27E-322)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r2 = -128(0xffffffffffffff80, double:NaN)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L17
            int r4 = (int) r4
            byte r4 = (byte) r4
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            goto L18
        L17:
            r4 = 0
        L18:
            return r4
    }

    public static final java.lang.Byte toByteExactOrNull(short r2) {
            r0 = 0
            r1 = -128(0xffffffffffffff80, float:NaN)
            if (r1 > r2) goto La
            r1 = 127(0x7f, float:1.78E-43)
            if (r2 > r1) goto La
            r0 = 1
        La:
            if (r0 == 0) goto L12
            byte r2 = (byte) r2
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public static final java.lang.Integer toIntExactOrNull(double r4) {
            r0 = 4746794007244308480(0x41dfffffffc00000, double:2.147483647E9)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L11
            r2 = -4476578029606273024(0xc1e0000000000000, double:-2.147483648E9)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1
        L11:
            if (r1 == 0) goto L19
            int r4 = (int) r4
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    public static final java.lang.Integer toIntExactOrNull(float r2) {
            r0 = 1325400064(0x4f000000, float:2.1474836E9)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r0 = -822083584(0xffffffffcf000000, float:-2.1474836E9)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L16
            int r2 = (int) r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static final java.lang.Integer toIntExactOrNull(long r4) {
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L10
            r2 = -2147483648(0xffffffff80000000, double:NaN)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L10
            r1 = 1
        L10:
            if (r1 == 0) goto L18
            int r4 = (int) r4
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            goto L19
        L18:
            r4 = 0
        L19:
            return r4
    }

    public static final java.lang.Long toLongExactOrNull(double r4) {
            r0 = 4890909195324358656(0x43e0000000000000, double:9.223372036854776E18)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r2 = -4332462841530417152(0xc3e0000000000000, double:-9.223372036854776E18)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L16
            long r4 = (long) r4
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            goto L17
        L16:
            r4 = 0
        L17:
            return r4
    }

    public static final java.lang.Long toLongExactOrNull(float r2) {
            r0 = 1593835520(0x5f000000, float:9.223372E18)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r0 = -553648128(0xffffffffdf000000, float:-9.223372E18)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L16
            long r0 = (long) r2
            java.lang.Long r2 = java.lang.Long.valueOf(r0)
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static final java.lang.Short toShortExactOrNull(double r4) {
            r0 = 4674736138332667904(0x40dfffc000000000, double:32767.0)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto L11
            r2 = -4548635623644200960(0xc0e0000000000000, double:-32768.0)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L11
            r1 = 1
        L11:
            if (r1 == 0) goto L1a
            int r4 = (int) r4
            short r4 = (short) r4
            java.lang.Short r4 = java.lang.Short.valueOf(r4)
            goto L1b
        L1a:
            r4 = 0
        L1b:
            return r4
    }

    public static final java.lang.Short toShortExactOrNull(float r2) {
            r0 = 1191181824(0x46fffe00, float:32767.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Lf
            r0 = -956301312(0xffffffffc7000000, float:-32768.0)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Lf
            r1 = 1
        Lf:
            if (r1 == 0) goto L18
            int r2 = (int) r2
            short r2 = (short) r2
            java.lang.Short r2 = java.lang.Short.valueOf(r2)
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    public static final java.lang.Short toShortExactOrNull(int r2) {
            r0 = 0
            r1 = 32767(0x7fff, float:4.5916E-41)
            if (r2 > r1) goto La
            r1 = -32768(0xffffffffffff8000, float:NaN)
            if (r1 > r2) goto La
            r0 = 1
        La:
            if (r0 == 0) goto L12
            short r2 = (short) r2
            java.lang.Short r2 = java.lang.Short.valueOf(r2)
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public static final java.lang.Short toShortExactOrNull(long r4) {
            r0 = 32767(0x7fff, double:1.6189E-319)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 0
            if (r0 > 0) goto Le
            r2 = -32768(0xffffffffffff8000, double:NaN)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Le
            r1 = 1
        Le:
            if (r1 == 0) goto L17
            int r4 = (int) r4
            short r4 = (short) r4
            java.lang.Short r4 = java.lang.Short.valueOf(r4)
            goto L18
        L17:
            r4 = 0
        L18:
            return r4
    }

    public static final kotlin.ranges.CharRange until(char r1, char r2) {
            r0 = 0
            int r0 = kotlin.jvm.internal.Intrinsics.compare(r2, r0)
            if (r0 > 0) goto Le
            kotlin.ranges.CharRange$Companion r1 = kotlin.ranges.CharRange.Companion
            kotlin.ranges.CharRange r1 = r1.getEMPTY()
            return r1
        Le:
            kotlin.ranges.CharRange r0 = new kotlin.ranges.CharRange
            int r2 = r2 + (-1)
            char r2 = (char) r2
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(byte r1, byte r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(byte r1, int r2) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 > r0) goto Lb
            kotlin.ranges.IntRange$Companion r1 = kotlin.ranges.IntRange.Companion
            kotlin.ranges.IntRange r1 = r1.getEMPTY()
            return r1
        Lb:
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(byte r1, short r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(int r1, byte r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(int r1, int r2) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 > r0) goto Lb
            kotlin.ranges.IntRange$Companion r1 = kotlin.ranges.IntRange.Companion
            kotlin.ranges.IntRange r1 = r1.getEMPTY()
            return r1
        Lb:
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(int r1, short r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(short r1, byte r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(short r1, int r2) {
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r2 > r0) goto Lb
            kotlin.ranges.IntRange$Companion r1 = kotlin.ranges.IntRange.Companion
            kotlin.ranges.IntRange r1 = r1.getEMPTY()
            return r1
        Lb:
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.IntRange until(short r1, short r2) {
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            int r2 = r2 + (-1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final kotlin.ranges.LongRange until(byte r5, long r6) {
            r0 = -9223372036854775808
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            kotlin.ranges.LongRange$Companion r5 = kotlin.ranges.LongRange.Companion
            kotlin.ranges.LongRange r5 = r5.getEMPTY()
            return r5
        Ld:
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r5
            r3 = 1
            long r6 = r6 - r3
            r0.<init>(r1, r6)
            return r0
    }

    public static final kotlin.ranges.LongRange until(int r5, long r6) {
            r0 = -9223372036854775808
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            kotlin.ranges.LongRange$Companion r5 = kotlin.ranges.LongRange.Companion
            kotlin.ranges.LongRange r5 = r5.getEMPTY()
            return r5
        Ld:
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r5
            r3 = 1
            long r6 = r6 - r3
            r0.<init>(r1, r6)
            return r0
    }

    public static final kotlin.ranges.LongRange until(long r5, byte r7) {
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r7
            r3 = 1
            long r1 = r1 - r3
            r0.<init>(r5, r1)
            return r0
    }

    public static final kotlin.ranges.LongRange until(long r5, int r7) {
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r7
            r3 = 1
            long r1 = r1 - r3
            r0.<init>(r5, r1)
            return r0
    }

    public static final kotlin.ranges.LongRange until(long r3, long r5) {
            r0 = -9223372036854775808
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            kotlin.ranges.LongRange$Companion r3 = kotlin.ranges.LongRange.Companion
            kotlin.ranges.LongRange r3 = r3.getEMPTY()
            return r3
        Ld:
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            r1 = 1
            long r5 = r5 - r1
            r0.<init>(r3, r5)
            return r0
    }

    public static final kotlin.ranges.LongRange until(long r5, short r7) {
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r7
            r3 = 1
            long r1 = r1 - r3
            r0.<init>(r5, r1)
            return r0
    }

    public static final kotlin.ranges.LongRange until(short r5, long r6) {
            r0 = -9223372036854775808
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            kotlin.ranges.LongRange$Companion r5 = kotlin.ranges.LongRange.Companion
            kotlin.ranges.LongRange r5 = r5.getEMPTY()
            return r5
        Ld:
            kotlin.ranges.LongRange r0 = new kotlin.ranges.LongRange
            long r1 = (long) r5
            r3 = 1
            long r6 = r6 - r3
            r0.<init>(r1, r6)
            return r0
    }
}
